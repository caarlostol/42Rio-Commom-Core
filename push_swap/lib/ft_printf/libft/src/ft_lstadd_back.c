/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:37:11 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:37:12 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implements ft_lstadd_back function:
// add the node 'new' at the end of the linked list

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (lst)
	{
		if (current)
		{
			current = ft_lstlast(current);
			current->next = new;
		}
		else
			*lst = new;
	}
}
