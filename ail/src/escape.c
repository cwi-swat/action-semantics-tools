

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define ESC_BUF_SIZE 1024

static char buf[ESC_BUF_SIZE] = {'\0',};


char* escape_quotes(const char *s) {
  int i, j;
  int len = strlen(s);
  assert(len <= ESC_BUF_SIZE);
  j = 0;
  for (i = 0; i <= len; i++, j++) {
    if (s[i] == '\"') {
      buf[j] = '\\';
      buf[++j] = '\"';
    }
    else
      buf[j] = s[i];
  }
  return buf;
}
