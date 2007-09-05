module pp-Java-Expressions

strategies

  //TODO: use priorities to remove unnecessary ( )
  java-to-box =
    expr-to-box; ?box; !-- H hs=0 ["(" ~box ")"] --

  java-to-box: Lit(l) -> l

  expr-to-box: Assign(lval, e)            -> -- H hs=1 [~lval "="    ~e] --
  expr-to-box: AssignMul(lval, e)         -> -- H hs=1 [~lval "*="   ~e] --
  expr-to-box: AssignDiv(lval, e)         -> -- H hs=1 [~lval "/="   ~e] --
  expr-to-box: AssignRemain(lval, e)      -> -- H hs=1 [~lval "%="   ~e] --
  expr-to-box: AssignPlus(lval, e)        -> -- H hs=1 [~lval "+="   ~e] --
  expr-to-box: AssignMinus(lval, e)       -> -- H hs=1 [~lval "-="   ~e] --
  expr-to-box: AssignLeftShift(lval, e)   -> -- H hs=1 [~lval "<<="  ~e] --
  expr-to-box: AssignRightShift(lval, e)  -> -- H hs=1 [~lval ">>="  ~e] --
  expr-to-box: AssignURightShift(lval, e) -> -- H hs=1 [~lval ">>>=" ~e] --
  expr-to-box: AssignAnd(lval, e)         -> -- H hs=1 [~lval "&="   ~e] --
  expr-to-box: AssignExcOr(lval, e)       -> -- H hs=1 [~lval "^="   ~e] --
  expr-to-box: AssignOr(lval, e)          -> -- H hs=1 [~lval "|="   ~e] --

  expr-to-box: Plus(e)     -> -- H hs=0 [   "+"  ~e] --
  expr-to-box: Minus(e)    -> -- H hs=0 [   "-"  ~e] --
  expr-to-box: PreIncr(e)  -> -- H hs=0 [   "++" ~e] --
  expr-to-box: PreDecr(e)  -> -- H hs=0 [   "--" ~e] --
  expr-to-box: PostIncr(e) -> -- H hs=0 [~e "++"   ] --
  expr-to-box: PostDecr(e) -> -- H hs=0 [~e "--"   ] --

  expr-to-box: Mul(e1, e2)          -> -- H hs=1 [~e1  "*"   ~e2] --
  expr-to-box: Div(e1, e2)          -> -- H hs=1 [~e1  "/"   ~e2] --
  expr-to-box: Remain(e1, e2)       -> -- H hs=1 [~e1  "%"   ~e2] --
  expr-to-box: Plus(e1, e2)         -> -- H hs=1 [~e1  "+"   ~e2] --
  expr-to-box: Minus(e1, e2)        -> -- H hs=1 [~e1  "-"   ~e2] --
  expr-to-box: LeftShift(e1, e2)    -> -- H hs=1 [~e1  "<<"  ~e2] --
  expr-to-box: RightShift(e1, e2)   -> -- H hs=1 [~e1  ">>"  ~e2] --
  expr-to-box: URightShift(e1, e2)  -> -- H hs=1 [~e1  ">>>" ~e2] --

  expr-to-box: Lt(e1, e2)           -> -- H hs=1 [~e1  "<"   ~e2] --
  expr-to-box: Gt(e1, e2)           -> -- H hs=1 [~e1  ">"   ~e2] --
  expr-to-box: LtEq(e1, e2)         -> -- H hs=1 [~e1  "<="  ~e2] --
  expr-to-box: GtEq(e1, e2)         -> -- H hs=1 [~e1  ">="  ~e2] --
  expr-to-box: Eq(e1, e2)           -> -- H hs=1 [~e1  "=="  ~e2] --
  expr-to-box: NotEq(e1, e2)        -> -- H hs=1 [~e1  "!="  ~e2] --
  expr-to-box: LazyAnd(e1, e2)      -> -- H hs=1 [~e1  "&&"  ~e2] --
  expr-to-box: LazyOr(e1, e2)       -> -- H hs=1 [~e1  "||"  ~e2] --
  expr-to-box: And(e1, e2)          -> -- H hs=1 [~e1  "&"   ~e2] --
  expr-to-box: ExcOr(e1, e2)        -> -- H hs=1 [~e1  "^"   ~e2] --
  expr-to-box: Or(e1, e2)           -> -- H hs=1 [~e1  "|"   ~e2] --

  expr-to-box: InstanceOf(e1, e2)   -> -- H hs=1 [~e1 "instanceof" ~e2] --

  expr-to-box: Complement(e)         -> -- H hs=0 ["~" ~e] --
  expr-to-box: Not(e)                -> -- H hs=0 ["!" ~e] --
  expr-to-box: Cond(e1, e2, e3)    -> -- H hs=1 [~e1  "?" ~e2 ":"  ~e3] --

  java-to-box: Name(s) -> s

  java-to-box: This()   -> -- KW["this"] --
  java-to-box: QThis(q) -> -- H hs=0 [~q "." KW["this"]] --

  java-to-box: 
    Invoke(method, exprs) -> -- H hs=0 [~method ~args] --
      where <list-to-args> exprs => args

  java-to-box: 
    Method(n) -> n

  java-to-box: 
    Method(e, i) -> -- H hs=0 [~e "." ~S(i)] --

  java-to-box: 
    SuperMethod(i) -> -- H hs=0 [KW["super"] "." ~S(i)] --

  java-to-box: 
    QSuperMethod(q, i) -> -- H hs=0 [~q "." KW["super"] "." ~S(i)] --

  java-to-box: 
    NewInstance(type, exprs, None()) -> -- H hs=0 [H hs=1 [KW["new"] ~type] ~args] --
      where <list-to-args> exprs => args

  java-to-box: 
    QNewInstance(e, n, exprs, None()) -> -- H hs=0 [~e "." H hs=1 [KW["new"] ~S(n)] ~args] --
      where <list-to-args> exprs => args

  java-to-box: 
    NewInstance(type, exprs, Some(body)) -> -- V vs=0[H hs=0 [H hs=1 [KW["new"] ~type] ~args] ~body] --
      where <list-to-args> exprs => args

  java-to-box: 
    QNewInstance(e, n, exprs, Some(body)) -> -- V vs=0 [H hs=0 [~e "." H hs=1 [KW["new"] ~S(n)] ~args] ~body] --
      where <list-to-args> exprs => args

  java-to-box: 
    NewArray(type, dimexprs, dims) -> -- H hs=0 ([H hs=1 [KW["new"] ~type]] ++ ~dimexprs ++ ~dims) --

  java-to-box: 
    NewArray(type, dims, init@ArrayInit(_, _)) -> -- H hs=0 ([H hs=1 [KW["new"] ~type]] ++ ~dims ++ [~init]) --

  java-to-box: 
    ArrayAccess(e1, e2) -> -- H hs=0 [ ~e1 "[" ~e2 "]"] --

  java-to-box: 
    Cast(t, e) -> -- H hs=0 ["(" ~t ")" ~e] --

  java-to-box: 
    Field(e, n) -> -- H hs=0 [~e "." ~S(n)] --

  java-to-box: 
    SuperField(n) -> -- H hs=0 [KW["super"] "." ~S(n)] --

  java-to-box: 
    QSuperField(q, n) -> -- H hs=0 [~q "." KW["super"] "." ~S(n)] --

