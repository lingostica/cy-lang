#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void *
cy_malloc (size_t size)
{
  void *ptr;

  if (!size)
    size = 1;
  if (!(ptr = malloc (size)))
    {
      perror ("malloc");
      exit (errno);
    }
  return ptr;
}

void
cy_free (void *ptr)
{
  if (ptr)
    free (ptr);
}

void *
cy_calloc (size_t nmemb, size_t size)
{
  void *ptr;

  if (!nmemb || !size)
    nmemb = size = 1;
  if (!(ptr = calloc (nmemb, size)))
    {
      perror ("calloc");
      exit (errno);
    }
  return ptr;
}

void *
cy_realloc (void *ptr, size_t size)
{
  void *new_ptr;

  if (!size)
    size = 1;
  if (!ptr)
    new_ptr = cy_malloc (size);
  else
    new_ptr = realloc (ptr, size);
  if (!new_ptr)
    {
      perror ("realloc");
      exit (errno);
    }
  return new_ptr;
}
