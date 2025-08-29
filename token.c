#include "token.h"
#include <string.h>

extern void *cy_malloc (size_t size);

token_t
new_token (int type, char* start, char* end)
{
  token_t token;

  token.type = type;
  token.lexeme = cy_malloc (end - start);
  strncpy (token.lexeme, start, end - start);
  token.lexeme[end - start] = '\0';
  return token;
}
