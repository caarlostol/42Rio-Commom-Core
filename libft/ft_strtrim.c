/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:13:06 by chayashi          #+#    #+#             */
/*   Updated: 2023/11/09 14:20:25 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		end = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > front)
			end--;
		str = (char *)malloc(sizeof(char) * (end - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], end - front + 1);
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	s[] = "  \n\n\t    Test string.   \n";
	char	d[50] = " , \n, \t"; 

	ft_strtrim(s, d);	
	printf("%s\n", ft_strtrim(s, d));
}*/	
