/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:01:53 by chayashi          #+#    #+#             */
/*   Updated: 2023/10/25 21:11:23 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
   const char str[] = "chayashi";
   const char ch = 'y';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is : %s\n", ch, ret);

   return(0);
}*/
