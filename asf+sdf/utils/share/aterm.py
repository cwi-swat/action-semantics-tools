
from re import compile, match, search
from string import lstrip, strip, atoi, atof, join

afun_re = compile('[a-zA-Z_][a-zA-Z0-9-_]*')
afunq_re = compile('"([^"]*)"')
atermint_re = compile('[+-]?[0-9]+')
atermreal_re = compile('[+-]?[0-9]+[.][0-9]*(E[+-]?[0-9]+)?')
atermlist_re = compile('\[(.*)\]')
annotation_re = compile('\{(.*)\}')
atermplaceholder_re = compile('\<([a-zA-Z0-9-_.+]+)\>')

class ATerm:
    def __init__(self):
	self.annos = None
    def setannotation(self, annos):
	self.annos = annos
    def hasannotation(self, label):
	# To be implemented.
	raise RuntimeError, 'not yet implemented.'
    def __str__(self):
	if self.annos: 
	    return '{' + str(self.annos) + '}'
	return ''
    pass

class ATermInt(ATerm):
    def __init__(self, i):
	ATerm.__init__(self)
	self.int = i
    def __str__(self):
	as = ATerm.__str__(self)
	return str(self.int) + as

class ATermReal(ATerm):
    def __init__(self, r):
	ATerm.__init__(self)
	self.real = r
    def __str__(self):
	as = ATerm.__str__(self)
	return str(self.real) + as

class ATermAppl(ATerm):
    def __init__(self, name, args = []):
	ATerm.__init__(self)
	self.name = name
	self.args = args
    def __str__(self):
	as = ATerm.__str__(self)
	if len(self.args) > 0:
	    return self.name + '(' + join(map(str, self.args), ',') + ')' + as
	else:
	    # Do something about quoting!!!
	    #if match('".*"', self.name):
		#return self.name + as
	    #return '"%s"' % self.name + as
	    return self.name + as

class ATermPlaceholder(ATerm):
    def __init__(self, pattern):
	ATerm.__init__(self)
	self.pattern = pattern
    def __str__(self):
	as = ATerm.__str__(self)
	return str(self.pattern) + as
	

class ATermList(ATerm):
    def __init__(self, elts):
	ATerm.__init__(self)
	self.elts = elts
    def __str__(self):
	as = ATerm.__str__(self)
	return '[' + join(map(str, self.elts), ',') + ']' + as
	


def str2aterm(s):
    (s, t) = parse_aterm(s)
    return t


def parse_aterm(s):
    r = None
    s = lstrip(s)
    m = atermint_re.match(s)
    if m != None:    
	r = parse_atermint(s)
    m = atermreal_re.match(s)
    if m != None:        
	r = parse_atermreal(s)
    m = atermplaceholder_re.match(s)
    if m != None:        
	r = parse_atermplaceholder(s)
    m = afun_re.match(s)
    n = afunq_re.match(s)
    if m != None or n != None:    
	r = parse_atermappl(s)

    # Default
    if not  r:
	r = parse_atermlist(s)

    #if r:
    #	return r

    # Read annotation
    if r != None:
    	(s, t) = r
	if t:
	    #print 'parse_aterm', "**",  s, "***",  t
	    (s, a) = parse_annotation(s)
	    t.setannotation(a)
	    return (s, t)
    return (s,None) # Crucial: anders faalt ie op ) in appl.

def parse_annotation(s):
    s = lstrip(s)
    #print 'anno',  s
    try:
	if s[0] == '{':
	    (s, t) =  parse_atermlist(s[1:])
	    if s[0] == '}':
		return (s[1:], t)
	    else:
		raise ValueError, 'invalid annotations: ' + s
    except IndexError:
	pass
    return (s,None)
	
def parse_arglist(s):
    #print 'arglist', s
    l = []
    s = lstrip(s)
    (s, t) = parse_aterm(s)
    #print 'arglist', s, str(t)
    #print 's', s, 't', t
    while t != None:
	#print 's', s, 't', t
	l.append(t)
	s = lstrip(s)
	try:
	    if s[0] == ',':
		s = s[1:]
	except IndexError:
	    pass
	(s, t) = parse_aterm(s)
    return (s,l)

def parse_atermlist(s):
    #print s
    s = lstrip(s)
    org = s
    if s[0] == '[':
	(s, l) = parse_arglist(s[1:])
	#print s
	if s[0] == ']':
	    return (s[1:],ATermList(l))
	else:
	    raise ValueError, 'invalid atermlist: ' + org + ' ' + s
    else:
	return (s, None)

def parse_atermint(s):
    #print s
    s = lstrip(s)
    m = atermint_re.match(s)
    if m != None:
	s = s[m.end():]
	return (s, ATermInt(atoi(m.group())))
    else:
	raise ValueError, 'invalid atermint: ' + s

def parse_atermreal(s):
    #print s
    s = lstrip(s)
    m = atermreal_re.match(s)
    if m != None:
	s = s[m.end():]
	return (s, ATermReal(atof(m.group())))
    else:
	raise ValueError, 'invalid atermreal: ' + s

def parse_atermappl(s):
    #print 'appl', s
    s = lstrip(s)
    org = s
    m = afun_re.match(s)
    n = afunq_re.match(s)
    if m == None and n == None:
	raise ValueError, 'invalid atermappl: ' + s
    if m != None:
	afun = m.group()
	s = s[m.end():]
    elif n != None:
	afun = n.group(1)
	if needs_quotes(afun):
	    afun = n.group() # With quotes
	s = s[n.end():]
    l = []
    try:
	if s[0] == '(':
	    argv = lstrip(s[1:])
	    (s, l) = parse_arglist(argv)
	    if s[0] == ')':
		s = s[1:] # get rid of last )
	    else:
		raise ValueError, 'invalid aterm appl: ' + org
    except IndexError:
	pass
    return (s, ATermAppl(afun, l))

def parse_atermplaceholder(s):
    #print 'atermplaceholder', s
    s = lstrip(s)
    m = atermplaceholder_re.match(s)
    if m != None:
	s = s[m.end():]
	#print s
	return (s, ATermPlaceholder(m.group()))
    else:
	raise ValueError, 'invalid atermplaceholder: ' + s


def needs_quotes(s):
    m = search('[\t\n ]', s)
    if m:
	return 1
    return 0

if __name__ == '__main__':
    a = str2aterm("fc(a, <int>{[a]}, n(a,f), [1, 2, 3])")
    print str(a)
