#include <string.h>
#include <stdlib.h>

char  *ft_strdup(char *src)
{
  int  i = 0;
  int  len = 0;
  char  *dst;

  while (src[len])
    len++;
  dst = malloc(sizeof(char) * (len + 1));
  if (!dst)
    return (NULL);
  while (src[i])
    {
      dst[i] = src[i];
      i++;
    }
  dst[i] = '\0';
  return (dst);
}
/*
#include <stdio.h>
int  main()
{
  char  *src = "The Dup String";
  char  dst[15] = "The Old String";

  printf("%s\n", ft_strdup(src));
}*/