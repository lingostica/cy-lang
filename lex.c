#include "token.h"
#include <ctype.h>
#include <stdio.h>

int
lex (char *s)
{
  while (isspace (*s))
    s++;

  switch (*s)
    {
    default:
      return *s;
    }
}
