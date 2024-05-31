/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:37:18 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:37:19 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implements ft_lstdelone function:
// delete the node 'lst' with the function 'del'

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
