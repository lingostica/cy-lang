#ifndef TOKEN_H
#define TOKEN_H

typedef struct
{
  enum
  {
    INT = 128,
    FLOAT
  } type;
  char *lexeme;
} token_t;

extern token_t new_token (int type, char* start, char* end);

#endif
