
import os, string

f = os.popen('find . -name "*.asf" -printf "%h/%f:%s\n"')
ls = f.readlines()
f.close()

for l in ls:
    s = string.rstrip(l)
    [name, size] = string.split(s,':')
    if string.atoi(size) == 0:
        print 'rm ' + name
        os.system('rm ' + name)
