/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:42:49 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:42:50 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_len(char c, int *len)
{
	ft_putchar_fd(c, 1);
	(*len)++;
}

void	ft_putstr_len(char *str, int *len)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*len += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar_len(*str, len);
		str++;
	}
}
