
#ifndef __AN_AGENT_H
#define __AN_AGENT_H 1

#include <aterm2.h>

#define AN_AGENT_PATTERN "agent(<int>)"

#define AN_make_agent(n) (ATmake(AN_AGENT_PATTERN, ((int)n)))

#define AN_isAgent(d) (ATmatch(d, AN_AGENT_PATTERN))

#endif
