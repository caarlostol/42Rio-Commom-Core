#include <unistd.h>

int  ft_isblank(char c)
{
  if (c == ' ' || c == '\t')
    return (1);
  return (0);
}

int  main(int ac, char **av)
{
  int  i;
  int j = 0;
  int  flag = 0;;
  char  *str = av[1];

  if (ac == 2)
  {
    while (ft_isblank(str[j]))
      j++;
    i = j;
    while (str[i])
      {
        if (ft_isblank(str[i]))
          flag = 1;
        if (!ft_isblank(str[i]))
        {
          if (flag)
            write(1, " ", 1);
          flag = 0;
          write(1, &str[i], 1);
        }
        i++;
      }
  }
  write(1, "\n", 1);
  return (0);
}