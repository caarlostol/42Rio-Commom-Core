/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:56:27 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/29 11:08:23 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	write(2, "\033[0;31m", 8);
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write(2, "\033[0m", 5);
}

int	ft_is_numerique(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_arg_is_valid(char *str)
{
	int	i;

	i = 0;
	if (ft_is_numerique(str[i]))
		i++;
	else if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		i++;
	else if (str[i] == '.')
		i++;
	else if (str[i] == ' ')
		i++;
	else
		ft_putstr(ERROR);
	return (1);
}

void	ft_check_double_point(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			flag++;
			if (flag > 1)
				ft_putstr(ERROR);
		}
		i++;
	}
}
