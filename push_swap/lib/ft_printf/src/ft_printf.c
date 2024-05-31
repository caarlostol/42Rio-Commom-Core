/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:42:42 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:42:43 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implement printf function

#include "ft_printf.h"

static void	ft_printf_check(char c, va_list *args, int *i, int *len)
{
	if (c == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr_len(va_arg(*args, char *), len);
	else if (c == 'p')
		ft_putpointer_len(va_arg(*args, uintptr_t), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr_len(va_arg(*args, int), len);
	else if (c == 'u')
		ft_putnbr_u_len(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_putnbr_hexa_len(va_arg(*args, unsigned int), len, false);
	else if (c == 'X')
		ft_putnbr_hexa_len(va_arg(*args, unsigned int), len, true);
	else if (c == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_check(str[i], &args, &i, &len);
		}
		else
			ft_putchar_len(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
