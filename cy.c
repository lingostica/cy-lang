#include <stdio.h>

extern int parse (char *s);

int
main ()
{
  char ptr[BUFSIZ];
  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      printf ("%d\n", parse (ptr));
    }
  while (!feof (stdin))
    ;
}
