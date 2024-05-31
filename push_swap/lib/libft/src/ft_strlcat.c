/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:08:28 by fnascime          #+#    #+#             */
/*   Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *dest)
{
	size_t	len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*dst;
	const char		*src_i;
	size_t			dest_length;
	size_t			remaining;

	dst = dest;
	src_i = src;
	remaining = size;
	while (remaining-- != 0 && *dst != '\0')
		dst++;
	dest_length = dst - dest;
	remaining = size - dest_length;
	if (remaining == 0)
		return (dest_length + count((src)));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*dst++ = *src;
			remaining--;
		}
		src++;
	}
	*dst = '\0';
	return (dest_length + (src - src_i));
}
