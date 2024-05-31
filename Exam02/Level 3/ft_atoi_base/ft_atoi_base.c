char to_lower(char c)
{
     if (c >= 'A' && c <= 'Z')
          return (c + 32);
     return (c);
               
}

int check_str(char c)
{
     if (c >= '0' && c <= '9')
          return (c - 48);
     else if (c >= 'a' && c <= 'f')
          return (c - 'a' + 10);
     return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
     int result = 0;
     int sign = 1;

     while (*str == ' ' || (*str >= 9 && *str <= 13))
          str++;
     while (*str == '-' || *str == '+')
     {
          if (*str == '-')
               sign *= -1;
          str++;
     }
     while (*str >= '0' && *str <= '9' || *str >= 'a' && *str <= 'f' || *str >= 'A' && *str <= 'F')
     {
          result = result * str_base + check_str(to_lower(*str));
          str++;
     }
     return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v)
{
     int n = ft_atoi_base(v[1], atoi(v[2]));
     printf("result: %i\n", n);
     return(0);
}
