/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:56:14 by chayashi          #+#    #+#             */
/*   Updated: 2023/12/05 18:35:44 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		write(1, s++, 1);
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
		len += write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
		len += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}

int	ft_putnbr_hexa(unsigned long int nb, unsigned int base, int upper)
{
	int		len;
	char	*type;

	if (upper == 1)
		type = "0123456789ABCDEF";
	else
		type = "0123456789abcdef";
	len = 0;
	if (nb >= base)
	{
		len += ft_putnbr_hexa(nb / base, base, upper);
		len += ft_putnbr_hexa(nb % base, base, upper);
	}
	else
		len += ft_putchar(type[nb]);
	return (len);
}

int	ft_putptr(unsigned long int ptr)
{
	int	letters;

	if (!ptr)
		return (ft_putstr("(nil)"));
	letters = 0;
	letters += ft_putstr("0x");
	letters += ft_putnbr_hexa(ptr, 16, 0);
	return (letters);
}
