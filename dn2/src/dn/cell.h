
#ifndef __AN_CELL_H 
#define __AN_CELL_H 1

#include <aterm2.h>

#define AN_CELL_PATTERN "cell(<int>)"

#define AN_make_cell(n) (ATmake(AN_CELL_PATTERN,n))

#define AN_isCell(d) (ATmatch(d, AN_CELL_PATTERN))

#endif
