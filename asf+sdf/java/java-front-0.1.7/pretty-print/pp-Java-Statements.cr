module pp-Java-Statements

strategies

	stm-box:
		x	-> --	H	hs=0 [~x ";"]	--



	java-to-box: Return(None())		-> <stm-box> --	KW["return"] --
	java-to-box: Return(Some(e)) ->	<stm-box>	-- H hs=1	[KW["return"]	~e]	--

  //TODO: remove call to expr-to-box when the pretty-printing of expressions handles priorities
	java-to-box: Expr(e)	-> <try(expr-to-box); stm-box> e
	java-to-box: Empty()	-> --	";"	--

	java-to-box:
		LocalVarDec(type,	decs)	-> <stm-box> --	H	hs=1 ([~type]	++ ~vardecs) --
			where	<separate-by(comma)> decs; ?vardecs

	java-to-box:
		Try(block, catches)	-> --	V	vs=0 ([KW["try"] ~block] ++	~catches)	--

	java-to-box:
		Try(block, catches,	finally)
			->
		-- V vs=0	([KW["try"]	~block]	++ ~catches	++ [KW["finally"]	~finally]) --

	java-to-box:
		Catch(param, block)	-> --	V	vs=0 [H	hs=0 [KW["catch"]	"("	~param ")"]	~block]	--

	java-to-box:
		Throw(e) ->	-- H hs=1	[KW["throw"] H hs=0[~e ";" ]]	--

	java-to-box:
		If(cond, then) ->	-- V vs=0	[H hs=0	[KW["if"]	"("	~cond	")"] ~b] --
			where	<ensure-block> then	=> b

	// TODO: make	"else	if"	more pretty
	java-to-box:
		If(cond, then, else) ->	-- V vs=0	[H hs=0	[KW["if"]	"("	~cond	")"] ~b1 KW["else"]	~b2] --
			where	<ensure-block> then	=> b1
					;	<ensure-block> else	=> b2

	ensure-block =
		?Block(_)	<	id + !Block([<id>])

	java-to-box:
		While(cond, body) -> -- V vs=0 [H hs=0 [KW["while"] "("	~cond	")"] ~b] --
			where	<ensure-block> body	=> b

/*
	//TODO:	finish pretty-printing of	statements

	 Labeled --	_1 KW[":"] _2,

	 While --	KW["while"]	KW["("]	_1 KW[")"] _2,
	 DoWhile --	KW["do"] _1	KW["while"]	KW["("]	_2 KW[")"] KW[";"],
	 For --	KW["for"]	KW["("]	_1 KW[";"] _2	KW[";"]	_3 KW[")"] _4,
	 For.1:opt --	_1,
	 For.2:opt --	_1,
	 For.3:opt --	_1,
	 Break --	KW["break"]	_1 KW[";"],
	 Break.1:opt --	_1,
	 Continue	-- KW["continue"]	_1 KW[";"],
	 Continue.1:opt	-- _1,

	 Synchronized	-- KW["synchronized"]	KW["("]	_1 KW[")"] _2,
	 Switch	-- KW["switch"]	KW["("]	_1 KW[")"] _2,
	 SwitchBlock --	KW["{"]	_1 _2	KW["}"],
	 SwitchBlock.1:iter-star --	_1,
	 SwitchBlock.2:iter-star --	_1,
	 SwitchGroup --	_1 _2,
	 SwitchGroup.1:iter	-- _1,
	 SwitchGroup.2:iter	-- _1,
	 Case	-- KW["case"]	_1 KW[":"],
	 Default --	KW["default"]	KW[":"],
	 Assert	-- KW["assert"]	_1 KW[";"],
	 Assert	-- KW["assert"]	_1 KW[":"] _2	KW[";"],
*/



