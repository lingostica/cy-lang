<<<<<<< HEAD
extern int lex (char *s);

int
=======
#include "token.h"
#include <stdio.h>

extern token_t lex (char *s);

token_t
>>>>>>> 1abc17f (lex nemeral)
parse (char *s)
{
  return lex (s);
}
