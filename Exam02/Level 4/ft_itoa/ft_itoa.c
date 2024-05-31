#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	long int n;
	int len;
	char *str;

	n = (long int)nbr;
	len = 0;

	while(n)
	{
		n = n / 10;
		len++;
	}
	
	if(nbr < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));

	if (!str)
		return (NULL);

	str[len] = '\0';
	n = (long int)nbr;
	if(nbr < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n) 
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
int	main()
{
	int  a = 123456;
	char *str = ft_itoa(a);
	printf("%s\n", str);
	return (0);
}
