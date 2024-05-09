/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:49:48 by chayashi          #+#    #+#             */
/*   Updated: 2023/11/30 13:49:55 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
