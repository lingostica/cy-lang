#ifndef TOKEN_H
#define TOKEN_H

typedef struct
{
  enum
<<<<<<< HEAD
    {
      INT,
      FLOAT
    } type;
  char *lexeme;
} token_t;

=======
  {
    INT,
    FLOAT
  } type;
  char *lexeme;
} token_t;

extern token_t new_token (int type, void* start, void* end);

>>>>>>> 1abc17f (lex nemeral)
#endif
