module parse-unit
imports io list-filter string list-cons options config

signature
  constructors
    TestSuite:  Name * Sort * ParseTable * Tests -> ParseTestSuite

    ParseTable: File   -> ParseTable
    Name:       String -> Name
    Sort:       String -> Sort
    File:       String -> File

    Tests:      List(Test) -> Tests
    Test:       Descr * Input * Result -> Test

    Descr:      String -> Name

    Success:    Result
    Failure:    Result

    String:     String -> Input
    File:       File   -> Input

    TestResults: List(TestResult) -> TestResults

    Success:    TestResult
    Failure:    TestResult

    ParseResult: Result * a -> ParseResult(a)

strategies

  parse-unit =
    iowrap(
      where(import-config-file(!"./parse-unit.config"))
    ; execute
    )

  execute = 
      ?TestSuite(Name(name), Sort(sort), ParseTable(File(table)), Tests(tests))
    ; where(	
          <echo> "-----------------------------------------------------------------------"
        ; <concat-strings; echo> ["executing testsuite ", name, " with ", <length; int-to-string> tests, " tests"]
        ; <echo> "-----------------------------------------------------------------------"
      )
    ; !TestResults(<map-with-index(execute-test(!sort, !table))> tests)
    ; ?TestResults(results)
    ; where(	
          <echo> "-----------------------------------------------------------------------"
        ; <conc-strings; echo> ("results testsuite ", name)
        ; <conc-strings; echo> ("successes : ", <count-in-string(?Success())> results)
        ; <conc-strings; echo> ("failures  : ", <count-in-string(?Failure())> results)
        ; <echo> "-----------------------------------------------------------------------"
      )

  execute-test(sort, table) = 
      ?(i, <id>); ?t
    ; ?Test(Descr(n), input, expected)
    ; <parse> (<sort>, <table>, input)
    ; where( <report> (i, t, <id>))
    ; <create-test-result> (<id>, expected)

  report = 
      ?(i, Test(Descr(n), _, expected), result)
    ; <create-test-result> (result, expected)
    ; where(
        try(
          ?Success()
        ; <concat-strings; echo> ["* OK   : test ", <int-to-string> i, " (", n, ")"]
        )
      )
    ; where(
        try(
          ?Failure()
        ; <concat-strings; echo> ["* ERROR: test ", <int-to-string> i, " (", n, ")"]
        ; <debug(!"*** Result:   ")> result
        ; <debug(!"*** Expected: ")> expected
        )
      )

  create-test-result:
    (ParseResult(Failure(), _), Failure()) -> Success()

  create-test-result:
    (ParseResult(Failure(), _), expected) -> Failure()
      where !expected; not(?Failure())

  create-test-result:
    (ParseResult(Success(), _), Success()) -> Success()

  create-test-result:
    (ParseResult(Success(), result), expected) -> Success()
      where !expected; not(?Success())
          ; !(result, expected); eq

  create-test-result:
    (ParseResult(Success(), result), expected) -> Failure()
      where !expected; not(?Success())
          ; !(result, expected); not(eq)

// tools

  count-in-string(s) = 
    filter(s); length; int-to-string

  map-with-index(s) = 
      !(0, <id>)
    ; rec x(
        \ (_, [])       -> [] \
      + \ (i, [e | es]) -> [<s> (i, e) | <x> (<add> (i, 1), es)] \
      )

  try-finally(s, f) = 
    s < where(f) + (where(f); fail)

  parse = 
      ?(options, String(s))
    ; <print-to-tmp-file> s
    ; ?file
    ; try-finally(
        <parse> (options, File(<id>))
      , <rm-files> [file]
      )

  parse =
      ?(options, File(file))
    ; new-file => out
    ; try-finally(
        (  !ParseResult(Success(), 
             <call-out(<get-config> "sglr", !options, !out, 
               call-tmp(<get-config> "implode-asfix", !["-S"], ReadFromFile))> file
           )
        <+ !ParseResult(Failure(), <<file-exists> out < (<ReadFromFile> out) + !None()>)
        )
      , try(<file-exists> out; <rm-files> [out])
      )

  parse = 
      ?(sort, table, input)
    ; <parse> (["-2tA", "-p", table, "-s", sort], input)
  
  print-to-tmp-file =
      where(
        new-file => result-file
      ; <open-file> (result-file, "w") => stream
      )
    ; <print> (stream, [<id>])
    ; <close-file> result-file
    ; !result-file

