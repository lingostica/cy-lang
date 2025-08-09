#include "parse.h"
#include <stdio.h>

int
main ()
{
  char ptr[BUFSIZ];
  token_t token;

  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      token = parse (ptr);
      printf ("%d:%s\n", token.type, token.lexeme);
    }
}
