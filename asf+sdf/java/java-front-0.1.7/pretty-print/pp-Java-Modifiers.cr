module pp-Java-Modifiers

strategies

  java-to-box: Public()       -> -- KW["public"]       --
  java-to-box: Private()      -> -- KW["private"]      --
  java-to-box: Protected()    -> -- KW["protected"]    --
  java-to-box: Abstract()     -> -- KW["abstract"]     --
  java-to-box: Final()        -> -- KW["final"]        --
  java-to-box: Static()       -> -- KW["static"]       --
  java-to-box: Native()       -> -- KW["native"]       --
  java-to-box: Transient()    -> -- KW["transient"]    --
  java-to-box: Volatile()     -> -- KW["volatile"]     --
  java-to-box: Synchronized() -> -- KW["synchronized"] --
  java-to-box: StrictFP()     -> -- KW["strictfp"]     --
    
