/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:34:43 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:34:44 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implementation of lstnew function: add new node to linked list

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// test ft_lstnew function

// #include <stdio.h>
// int main()
// {
// 	t_list *node;

// 	node = ft_lstnew("hello");
// 	printf("%s", node->content);
// 	return (0);
// }
