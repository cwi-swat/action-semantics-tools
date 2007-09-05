xt=/usr/local/xt
xtshare=$(xt)/share
xtbin=$(xt)/bin

PARSESDF=parse-sdf2
PACK=$(xtbin)/pack-sdf
RMVARS=removevarsyntax
ASOURCE=unparsePT
SDF2TABLE=sdf2table
SDF2TEXT=$(xtbin)/sdf2text
ADDEQSNEW=addeqssyntax.new
ADDEQSORG=addeqssyntax
CONCATASF=concat-asf
ASFC=asfc
ASFE=asfe
PGEN=parsetablegen
XTPGEN=$(xtbin)/parsetablegen
PARSER=sglr
IMPLODE=$(xtbin)/implode-asfix
IMPLODEPT=implodePT -t | sh ./implode-rest.sh
FLATTEN=flattenPT
PPGEN=$(xtbin)/ppgen
SDFCONSTBL=$(xtshare)/gpp/sdf.cons.tbl
SDFCONSPP=$(xtshare)/sdf-tools/sdf.cons.pp
SDFCONS=$(xtbin)/sdf-cons
ASFIX2ABOX=$(xtbin)/asfix2abox
AST2ABOX=$(xtbin)/ast2abox
ABOX2LATEX=$(xtbin)/abox2latex
ABOX2TEXT=$(xtbin)/abox2text
ABOX2HTML=$(xtbin)/abox2html
SDFVERSION=2.1
SDF=sdf
PP=$(xtbin)/pp
PDFLATEX=pdfelatex
LATEX=hugelatex
DVIPS=dvips -K* 
FIXPS=fixdlsrps
TOHTMLSDF=$(xtbin)/tohtml-sdf
ASFLOC=./asf
ASFPP=$(ASFLOC)/ASF.pp
SDFEXTRAPP=./sdf-extra.pp
ASFABBREVS=$(ASFLOC)/asf.abbrevs
BOXENV=$(xtshare)/boxenv
COMPABB=./compose-abbrevs
