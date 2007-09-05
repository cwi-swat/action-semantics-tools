module pp-Java-Names

strategies

  java-to-box: PackageName(name) -> <name-to-box> name
  java-to-box: ClassName(name)   -> <name-to-box> name
  java-to-box: AmbName(name)     -> <name-to-box> name

  java-to-box: TypeName(name)     -> S(name)
  java-to-box: QTypeName(q, name) -> <qid-to-box> (q, name)

  java-to-box: MethodName(name)             -> S(name)
  java-to-box: MethodName(AmbName(q), name) -> <qid-to-box> (q, name)

  java-to-box: ExprName(name)               -> S(name)
  java-to-box: ExprName(AmbName(q), name)   -> <qid-to-box> (q, name)

  qid-to-box:
    (q, name) -> -- H hs=0 (~prefix ++ ["." ~S(name)]) --
      where <name-to-boxes> q; ?prefix

  name-to-boxes =
    map(!S(<id>)); separate-by(point)

  name-to-box =
    name-to-boxes; ! -- H hs=0 ~<id> --

