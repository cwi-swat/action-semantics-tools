module pp-Java-Literals

strategies

  java-to-box: True()        -> -- KW["true"]    --
  java-to-box: False()       -> -- KW["false"]   --
  java-to-box: Null()        -> -- KW["null"]    --
  java-to-box: Class(Void()) -> -- H hs=0 [KW["void"] "." KW["class"]] --

  java-to-box: Bool(b)   -> b
  java-to-box: Class(c)  -> c
  java-to-box: Char(c)   -> S(c)
  java-to-box: String(s) -> S(s)
    where <is-double-quote> s

  java-to-box: String(s) -> S(<double-quote> s)
    where <not(is-double-quote)> s
  //TODO: double-quote is bugfix voor Stratego concrete syntax problems.

  java-to-box: Float(f)  -> -- NUM[ ~S(f) ] --
  java-to-box: Deci(d)   -> -- NUM[ ~S(d) ] --
  java-to-box: Hexa(h)   -> -- NUM[ ~S(h) ] --
  java-to-box: Octa(o)   -> -- NUM[ ~S(o) ] --

  is-double-quote = 
    is-quote(?34)

  is-quote(c) =
    where( explode-string; ?[<c> | <last; c>] )

