/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:45:01 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/29 11:01:18 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static double	ft_integer_part(char *str, int *i)
{
	double	result;

	result = 0.0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		result = result * 10.0 + (str[*i] - '0');
		(*i)++;
	}
	return (result);
}

static int	ft_skip_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (i);
}

static void	ft_decimal_part(char *str, double *result, int *i)
{
	double	decimal;

	decimal = 0.1;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		(*result) = (*result) + (str[(*i)++] - '0') * decimal;
		decimal *= 0.1;
	}
	if (str[*i] != '\0')
		ft_putstr(ERROR);
}

double	ft_atod(char *str)
{
	int		i;
	int		sign;
	double	result;

	sign = 1;
	i = ft_skip_spaces(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		if (!ft_is_numerique(str[++i]))
			ft_putstr(ERROR);
	}
	result = ft_integer_part(str, &i);
	if (str[i] == '.')
	{
		if (!ft_is_numerique(str[++i]))
			ft_putstr(ERROR);
		ft_decimal_part(str, &result, &i);
	}
	return (result *= sign);
}

void	ft_parce_args(t_fractal *fractal, char *name, char *s1, char *s2)
{
	fractal->set = name;
	ft_setup_the_env(fractal, fractal->set);
	ft_check_double_point(s1);
	ft_check_double_point(s2);
	fractal->c_imag = ft_atod(s2);
	fractal->c_real = ft_atod(s1);
	ft_julia(fractal);
}
