#include "parse.h"
#include <stdio.h>

int
main ()
{
  char ptr[BUFSIZ];

  while (fgets (ptr, BUFSIZ, stdin) != NULL)
    {
      parse (ptr);
    }
}
