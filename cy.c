<<<<<<< HEAD
#include <stdio.h>

extern int parse (char *s);

=======
#include "parse.h"
#include <stdio.h>

>>>>>>> 1abc17f (lex nemeral)
int
main ()
{
  char ptr[BUFSIZ];
<<<<<<< HEAD
  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      printf ("%d\n", parse (ptr));
    }
  while (!feof (stdin))
    ;
=======
  token_t token;

  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      token = parse (ptr);
      printf ("%d:%s\n", token.type, token.lexeme);
    }
>>>>>>> 1abc17f (lex nemeral)
}
