int  is_power_of_2(unsigned int n)
{
  if (n == 0)
    return (0);
  while (n > 1)
    {
      if (n % 2 == 0)
        n /= 2;
      else
        return (0);
    }
  return (1);
}
/*
#include <stdio.h>

int	main()
{
  printf("Result 1 means true and  Result 0 means false:\n%d\n", is_power_of_2(16));
  printf("%d\n", is_power_of_2(3));
}
*/