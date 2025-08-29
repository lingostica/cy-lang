#include "token.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

extern void* cy_malloc (size_t size);

token_t
lex (char *s)
{
  char *start = s, *end;
  token_t token;

  // Reference: lex & yacc 2nd edition, O'Reilly, 21 page
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

  switch (*s)
    {
    default:
      end = s;
      token = new_token (*s, start, end);
      return token;
    }
}
