/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:36:49 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:36:50 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implements lstlast function: return last node of list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != NULL && current->next != NULL)
		current = current->next;
	return (current);
}
// #include <stdio.h>
// int main()
// {
// 	t_list * l =  NULL;
// 	ft_lstadd_back(&l, ft_lstnew((void*)1));
// 	printf("%d", *(int *)(ft_lstlast(l)->content));
// }
