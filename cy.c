#include "parse.h"
#include <stdio.h>

int
main ()
{
  token_t token;
  char ptr[BUFSIZ];

  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      token = parse (ptr);
      printf ("%d %s\n", token.type, token.lexeme);
    }
}
