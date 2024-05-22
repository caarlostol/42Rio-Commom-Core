#include <unistd.h>

int  letter_count(int c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 'a' + 1);
  else if (c >= 'A' && c <= 'Z')
    return (c - 'A' + 1);
  return (1);
}

int	main(int ac, char **av)
{
  int  i = 0;
  int  repeat;
  char  *str = av[1];
  
  
  if (ac == 2)
  {
    while (str[i])
      {
        repeat = letter_count(str[i]);
        while (repeat--)
          write(1, &str[i], 1);
        i++;
      }
  }
  write(1, "\n", 1);
}