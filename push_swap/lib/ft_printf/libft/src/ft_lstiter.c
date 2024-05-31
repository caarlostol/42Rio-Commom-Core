/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:37:26 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:37:27 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implements ft_lstiter function:
// iterates the list 'lst'
// and applies the function 'f' to the content of each node

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
