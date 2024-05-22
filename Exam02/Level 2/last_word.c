#include <unistd.h>

int  ft_isblank(char c)
{
  if (c == ' ' || c == '\t')
    return (1);
  return (0);
}

int  main(int ac, char **av)
{
  int  i = 0;
  char *str = av[1];

  if (ac == 2)
  {
    while (str[i])
      i++;
    i--;
    while (ft_isblank(str[i]))
      i--;
    while (str[i] && !ft_isblank(str[i]))
      i--;
    i++;
    while (str[i] && !ft_isblank(str[i]))
      write(1, &str[i++], 1);
  }
  write(1, "\n", 1);
}