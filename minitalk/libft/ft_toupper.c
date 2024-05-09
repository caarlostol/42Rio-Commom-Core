/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:11:32 by chayashi          #+#    #+#             */
/*   Updated: 2023/10/17 18:22:41 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
int main()
{
    char c;
 
    c='r'; //minúsculo
    printf("%c\n", ft_toupper(c));
 
    c='i'; //minúsculo
    printf("%c\n", ft_toupper(c));
 
     c='*'; //não minúsculo
    printf("%c\n", ft_toupper(c));
 
     c='G'; //não minúsculo
    printf("%c\n", ft_toupper(c));
 
    return 0;
}*/
