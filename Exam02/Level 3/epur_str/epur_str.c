#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	flag = 0;
	char	*str = av[1];

	if (ac == 2)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				flag = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
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
}		