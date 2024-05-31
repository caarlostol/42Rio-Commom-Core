/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:39:35 by fnascime          #+#    #+#             */
/*   Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implementation of strlcpy function

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (src_len);
}

// test ft_strlcpy function

// #include <stdio.h>
// int				main(void)
// {
// 	char	*string1;
// 	char	string2[10];

// 	string1 = "Hello";
// 	printf("base   : %s\n", string1);
// 	strlcpy(string2, string1, 5);
// 	printf("cpy c  : %s\n", string2);
// 	ft_strlcpy(string2, string1, 5);
// 	printf("cpy ft : %s\n", string2);
// }