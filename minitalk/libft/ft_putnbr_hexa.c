/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:48:05 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/08 15:31:43 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
