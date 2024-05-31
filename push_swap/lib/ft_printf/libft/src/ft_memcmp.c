/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:41:21 by chayashi          #+#    #+#             */
/*   Updated: 2023/10/27 15:00:33 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;
	size_t			i;

	str = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != dst[i])
			return (str[i] - dst[i]);
		i++;
	}
	return (0);
}
