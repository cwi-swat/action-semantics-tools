module pp-Java
imports Generic-Java abox option

strategies

  /* non parameterized */
  java-to-box:
    InterfaceDec(mods, name, None(), implements, body)
      ->
    InterfaceDec(mods, name, implements, body)

  java-to-box:
    ClassDec(mods, name, None(), extends, implements, body)
      ->
    ClassDec(mods, name, extends, implements, body)

  /* parameterized */
  java-to-box:
    InterfaceDec(mods, name, Some(typeparams), implements, body)
      ->
    -- V vs=0 [H hs=1 (~mods ++ [KW["interface"] ~S(name) ~typeparams ~implements]) ~body] --

  java-to-box:
    ClassDec(mods, name, Some(typeparams), extends, implements, body)
      ->
    -- V vs=0 [H hs=1 (~mods ++ [KW["class"] ~S(name) ~typeparams ~extends ~implements]) ~body] --

  /* non parameterized */
  java-to-box:
    Head(mods, None(), type, n, params, throws)
      ->
    Head(mods, type, n, params, throws)

  /* parameterized */
  java-to-box:
    Head(mods, Some(typeparams), type, n, params, throws)
      ->
    -- H hs=1 (~mods ++ [~typeparams ~type ~S(n) ~args ~throws]) --
      where <list-to-args> params => args

  /* non parameterized */
  java-to-box: 
    NewInstance(type, None(), exprs, body) ->  NewInstance(type, exprs, body)

  java-to-box: 
    QNewInstance(e, n, None(), exprs, body) -> QNewInstance(e, n, exprs, body)

  /* parameterized */
  java-to-box: 
    NewInstance(type, Some(typeargs), exprs, None())
      ->
    -- H hs=0 [H hs=1 [KW["new"] ~type] ~typeargs ~args] --
      where <list-to-args> exprs => args

  java-to-box: 
    QNewInstance(e, n, Some(typeargs), exprs, None())
      ->
    -- H hs=0 [~e "." H hs=1 [KW["new"] ~S(n)] ~typeargs ~args] --
      where <list-to-args> exprs => args

  java-to-box: 
    NewInstance(type, Some(typeargs), exprs, Some(body))
      ->
    -- V vs=0 [H hs=0 [H hs=1 [KW["new"] ~type] ~typeargs ~args] ~body] --
      where <list-to-args> exprs => args

  java-to-box: 
    QNewInstance(e, n, Some(typeargs), exprs, Some(body))
      ->
    -- V vs=0 [H hs=0 [~e "." H hs=1 [KW["new"] ~S(n)] ~typeargs ~args] ~body] --
      where <list-to-args> exprs => args

  /* misc */

  java-to-box:  GClassType(parts)     -> <type-parts-to-box> parts
  java-to-box:  GInterfaceType(parts) -> <type-parts-to-box> parts

  type-parts-to-box:
    parts -> -- H hs=0 ~content --
      where < map(try(is-string; !S(<id>)))
            ; separate-by(point) > parts => content

  java-to-box:
    ParamClass(i, args) -> -- H hs=0 [~S(i) ~args] --

  java-to-box:
    ParamInterface(i, args) -> -- H hs=0 [~S(i) ~args] --

  java-to-box:
    TypeParams(params) -> -- H hs=0 ["<" ~parameters ">"] --
      where <separate-by-comma> params => parameters

  java-to-box:
    TypeArgs(args)     -> -- H hs=0 ["<" ~arguments ">"] --
      where <separate-by-comma> args => arguments

  java-to-box:  TypeParam(var, None())      -> var
  java-to-box:  TypeParam(var, Some(bound)) -> -- H hs=1 [~var ~bound] --

  java-to-box:  Bound(t, None())       -> -- H hs=1 ["extends" ~t] --
  java-to-box:  Bound(t, Some(ibound)) -> -- H hs=1 ["extends" ~t ~ibound] --

  java-to-box:
    InterfacesBound(types) -> -- H hs=1 (["&"] ++ ~interfaces) --
      where <separate-by(! -- "&" --)> types => interfaces

  java-to-box:
    TypeVar(s) ->  -- ~S(s) --

