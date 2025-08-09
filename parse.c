#include "token.h"
#include <stdio.h>

extern token_t lex (char *s);

token_t
parse (char *s)
{
  return lex (s);
}
