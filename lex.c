#include "token.h"
#include <ctype.h>
#include <stdio.h>
<<<<<<< HEAD

int
lex (char *s)
{
  while (isspace (*s))
    s++;
=======
#include <string.h>

extern void* cy_malloc (size_t size);

token_t
lex (char *s)
{
  char *start = s, *end;
  token_t token;

  if (*s == '.' || isdigit (*s))
    {
      while ((*++s != EOF && isdigit (*s)))
	;
      if (*s == '.')
	while (*++s != EOF && isdigit (*s))
	  ;
      else
	{
	  end = s;
	  return new_token(INT, start, end);
	}
	  end = s;
	  return new_token(FLOAT, start, end);
    } 
  
  while (isspace (*s++))
    ;
>>>>>>> 1abc17f (lex nemeral)

  switch (*s)
    {
    default:
<<<<<<< HEAD
      return *s;
=======
      end = s;
      token = new_token (*s, start, end);
      return token;
>>>>>>> 1abc17f (lex nemeral)
    }
}
