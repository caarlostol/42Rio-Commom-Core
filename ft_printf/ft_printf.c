/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:33:10 by chayashi          #+#    #+#             */
/*   Updated: 2023/12/05 18:50:46 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_letters(const char c, va_list args)
{
	int	len;

	len = 0;
	if (c == '%')
		len += ft_putchar('%');
	else if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, unsigned long int));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_hexa(va_arg(args, unsigned int), 10, 0);
	else if (c == 'x')
		len += ft_putnbr_hexa(va_arg(args, unsigned int), 16, 0);
	else if (c == 'X')
		len += ft_putnbr_hexa(va_arg(args, unsigned int), 16, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += type_letters(*format, args);
		}
		else
		{
			ft_putchar(*format);
			len++;
		}
		format++;
	}
	va_end (args);
	return (len);
}
/*
#include <stdio.h>

int	main()
{
	printf("Return: %c\n", 'h');
	ft_printf("\nReturn my print: %c\n", 'h');
	printf("\nReturn: %s", "Test print\n");
	ft_printf("\nReturn my print: %s", "Test print\n");
	//printf("\nReturn: %p\n");
	//ft_printf("\nReturn my print: %p\n");
	printf("\nReturn: %d %i\n", 42, 28);
	ft_printf("\nReturn my print: %d %i\n", 42, 28);
	printf("\nReturn: %u\n", 589201);
	ft_printf("\nReturn my print: %u\n", 589201);
	printf("\nReturn: %x\n", 42);
	ft_printf("\nReturn my print: %x\n", 52);
	printf("\nReturn: %X\n", 42);
	ft_printf("\nReturn my print: %x\n", 52);
	
	return (0);
}*/
