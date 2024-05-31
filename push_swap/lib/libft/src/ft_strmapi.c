/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:17:04 by fnascime          #+#    #+#             */
/*   Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implement strmapi function: apply function to each character of string

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// test ft_strmapi function
// #include <stdio.h>

// char	ft_test(unsigned int i, char c)
// {
// 	i = 0;
// 	return (c - 32);
// }

// int main()
// {
// 	char *str = "Hello World!";
// 	char *new_str = ft_strmapi(str, ft_test);
// 	printf("%s\n", new_str);
		// prints only Hello due to the null terminator (space - 32)
// 	return (0);
// }