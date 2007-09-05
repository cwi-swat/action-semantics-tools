module pp-Java
imports Java abox
        pp-Java-Statements pp-Java-Expressions pp-Java-Literals 
        pp-Java-Names pp-Java-Modifiers
        pp-Generic-Java
        simple-traversal option list-basic options

signature
  constructors
    Concat : BoxContent * BoxContent -> BoxContent
    BoxList: BoxContent -> BoxContent
    Special: BoxContent -> SpecialBoxContent

strategies

  pp-Java =
    iowrap( java-pretty-print )

  java-pretty-print = 
      topdown(try(repeat(java-to-box)))

    ; topdown( try( ?Special(<id>))) //TODO: ad-hoc, remove later.
    ; topdown( try( ?BoxList(<id>))) //TODO: ad-hoc, remove later.
    ; bottomup( try( \ Concat(c1, c2) -> <conc> (c1, c2) \ )) //TODO: ad-hoc, remove later.

  java-to-box: ClassType(t)     -> t
  java-to-box: InterfaceType(t) -> t
  java-to-box: ArrayType(t)    -> -- H hs=0 [~t "[" "]"] --

  java-to-box: Void()    -> -- KW["void"] --

  java-to-box: Boolean() -> -- KW["boolean"] --
  java-to-box: Byte()    -> -- KW["byte"]    --
  java-to-box: Short()   -> -- KW["short"]   --
  java-to-box: Int()     -> -- KW["int"]     --
  java-to-box: Long()    -> -- KW["long"]    --
  java-to-box: Char()    -> -- KW["char"]    --
  java-to-box: Float()   -> -- KW["float"]   --
  java-to-box: Double()  -> -- KW["double"]  --

  java-to-box:
    CompilationUnit(Some(package), imports, types)  ->  -- V vs=1 [~package V vs=0 ~imports V vs=1 ~types] --

  java-to-box:
    CompilationUnit(None(), imports, types) ->  -- V vs=1 [V vs=0 ~imports V vs=1 ~types] --

  java-to-box:
    PackageDec(name) ->  -- H [KW["package"] H hs=0 [~name ";"]] --

  java-to-box:
    ImportDec(r) ->  r

  java-to-box:
    TypeRef(tname) -> -- H [KW["import"] H hs=0 [~tname ";"]] --
  java-to-box:
    PackageRef(pname) -> -- H hs=1 [KW["import"] H hs=0 [~pname ".*;"]] --

  java-to-box:
    Semicolon() -> -- "" --

  java-to-box:
    InterfaceDec(mods, name, implements, body)
      ->
    -- V vs=0 [H hs=1 (~mods ++ [KW["interface"] ~S(name) ~implements]) ~body] --

  java-to-box:
    ClassDec(mods, name, extends, implements, body)
      ->
    -- V vs=0 [H hs=1 (~mods ++ [KW["class"] ~S(name) ~extends ~implements]) ~body] --

  java-to-box: InterfaceBody(decs) -> <block-structure> (1, decs)
  java-to-box: ClassBody(decs)     -> <block-structure> (1, decs)

  // TODO: use the integer in the vs.
  block-structure:
    (1, elems) -> -- V vs=0 [H hs=1 ["{" V vs=0 ["" V vs=1 ~elems]] "}"] --
      where <not-empty> elems

  block-structure:
    (0, elems) -> -- V vs=0 [H hs=1 ["{" V vs=0 ["" V vs=0 ~elems]] "}"] --
      where <not-empty> elems

  block-structure:
    (_, []) -> -- H hs=1 ["{" "}"] --

  not-empty = not(?[])

  java-to-box:
    None() -> -- H hs=0 [""] --

  java-to-box:
    Some(c) -> c
  
  java-to-box:
    Extends(c) ->  -- H hs=1 [KW["extends"] ~c] --

  java-to-box:
    Implements(is) ->  -- H hs=1 [KW["implements"] ~interfaces] --
      where <separate-by-comma> is; ?interfaces

  java-to-box:
    ExtendsInterfaces(is) ->  -- H hs=1 [KW["extends"] ~interfaces] --
      where <separate-by-comma> is; ?interfaces

  hbox = 
      ( is-list < id + ![<id>])
    ; !-- H hs=0 ~<id> --

  comma = 
    !-- "," --

  point = 
    !-- "." --

  list-to-args:
    exprs -> -- H hs=0 ["(" ~args ")"] --
      where <not-empty> exprs
          ; <separate-by-comma> exprs => args

  separate-by-comma :
    xs -> -- H hs=1 ~vals --
      where <separate-by(comma)> xs => vals

  list-to-args:
    [] -> -- H hs=1 ["(" ")"] --

  java-to-box:
    StaticInit(b)   -> -- V vs=0 [KW["static"] ~b] --
  java-to-box:
    InstanceInit(b) -> b

  java-to-box:
    Block(stms) -> <block-structure> (0, stms)

  java-to-box:
    MethodDec(dec, body) -> -- V vs=0 [~dec ~body] --
  java-to-box:
    MethodDec(dec)       -> -- H hs=0 [~dec ";"] --

  //TODO: support pretty-printing of DeprHead?

  java-to-box:
    Head(mods, type, n, params, throws)
      ->
    -- H hs=1 (~mods ++ [~type ~S(n) ~args ~throws]) --
      where <list-to-args> params => args

  java-to-box:
    ConstructorDec(mods, class, params, throws, body)
      ->
    -- V vs=0 [H hs=1 (~mods ++ [~class ~args ~throws]) ~body] --
      where <list-to-args> params => args

  java-to-box:
    ConstructorBody(None(), stms) -> <block-structure> (0, stms)

  java-to-box:
    ConstructorBody(Some(cinvoke), stms) -> <block-structure> (0, [cinvoke | stms])

  java-to-box:
    Param(None(), type, vardecid) -> -- H hs=1 [~type ~vardecid] --

  java-to-box:
    Param(Some(Final()), type, vardecid) -> -- H hs=1 [KW["final"] ~type ~vardecid] --

  java-to-box:
    Throws(exceptions) -> -- H hs=1 [KW["throws"] ~excs] --
      where <separate-by-comma> exceptions => excs

  java-to-box:
    FieldDec(mods, type, ds)
      ->
    -- H hs=1 (~mods ++ [~type H hs=0 [~decs ";"]]) --
      where <separate-by-comma> ds => decs

  java-to-box:
    VarDec(i) -> i

  java-to-box:
    VarDec(i, init) -> -- H hs=1 [~i "=" ~init] --

  java-to-box:
    VarId(i) -> S(i)

  java-to-box:
    VarId(i, dims) -> -- H hs=0 ([~i] ++ ~dims) --

  java-to-box:
    Dim() -> -- H hs=0 ["[" "]"] --

  java-to-box:
    Dim(e) -> -- H hs=0 ["[" ~e "]"] --

  java-to-box:
    ArrayInit(exprs, _) -> -- H hs=0 ["{" ~vals "}"] -- 
      where <separate-by-comma> exprs => vals

  java-to-box:
    CInvoke(exprs) -> -- H hs=0 [KW["this"] ~args ";"] --
      where <list-to-args> exprs => args

  java-to-box:
    SuperCInvoke(exprs) -> -- H hs=0 [KW["super"] ~args ";"] --
      where <list-to-args> exprs => args

  java-to-box:
    QSuperCInvoke(q, exprs) -> -- H hs=0 [~q "." KW["super"] ~args ";"] --
      where <list-to-args> exprs => args

