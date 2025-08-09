#ifndef TOKEN_H
#define TOKEN_H

typedef struct
{
  enum
  {
    INT,
    FLOAT
  } type;
  char *lexeme;
} token_t;

extern token_t new_token (int type, void* start, void* end);

#endif
