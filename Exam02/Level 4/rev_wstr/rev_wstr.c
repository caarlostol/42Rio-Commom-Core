/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:10:06 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/29 15:16:56 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	end, start;
	char	*str = av[1];
	
	if (ac == 2)
	{
		while (str[i])
			i++;
		while(i >= 0)
		{
			while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
				i--;
			end = i;
			while (!(str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
				i--;
			start = i + 1;
			int	flag;
			flag = start;
			while (start <= end)
				write(1, &str[start++], 1);
			if (flag)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}	
