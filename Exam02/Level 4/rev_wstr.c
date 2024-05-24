#include <unistd.h>

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **av)
{
	int start;
	int end;
	int i = 0;
	char	*str = av[1];
		
	if (argc == 2)
	{   
		while (str[i])
			i++;
		while (i >= 0)
		{
			while (str[i] == '\0' || ft_isblank(str[i]))
				i--;
			end = i;
			while (str[i] && !ft_isblank(str[i]))
				i--;
			start = i + 1;
			int  flag;
			flag = start;
			while (start <= end)
			{
				write (1, &str[start],1);
				start++;		
			}
			if (flag)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
