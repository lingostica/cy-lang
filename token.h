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

#endif
