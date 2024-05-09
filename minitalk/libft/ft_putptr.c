/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:46:55 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/08 15:30:54 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
