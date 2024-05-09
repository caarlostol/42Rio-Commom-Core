/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:31:47 by chayashi          #+#    #+#             */
/*   Updated: 2023/12/05 18:35:19 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
