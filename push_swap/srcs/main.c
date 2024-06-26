/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:44:05 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:44:06 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push_swap program
// pos[0] = pos_a, pos[1] = pos_b
int	main(int argc, char **argv)
{
	int		i;
	t_node	*stack_a;
	t_node	*stack_b;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (argc == 2)
		i = -1;
	if (argc > 1)
	{
		while (argv[++i])
		{
			if (is_valid(stack_a, argv[i]) == false)
				ft_error(stack_a);
			stack_a = add_node(stack_a, ft_atoi(argv[i]));
		}
		push_swap(stack_a, stack_b, stack_len(stack_a));
		clear_lst_node(stack_a);
		clear_lst_node(stack_b);
	}
	return (0);
}
