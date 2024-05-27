#include <unistd.h>

int		main(int ac, char **av)
{
  int  i;
  char  *str = av[1];

  if (ac == 2)
  {
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
      i++;
    while ((str[i] != ' ' && str[i] != '\t') && str[i]) 
      {
        write(1, &str[i], 1);
        i++;
      }
  }
  write(1, "\n", 1);
}