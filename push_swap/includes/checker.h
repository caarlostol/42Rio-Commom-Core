/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:29:47 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:29:49 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "ft_printf.h"
# include "libft.h"
# include <stdbool.h>

typedef struct s_node
{
	int				content;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

bool				is_sorted(t_node *stack, bool reverse);
char				*get_next_line(int fd);
bool				execute(t_node **stack_a, t_node **stack_b, char *line,
						bool s_print);
void				print_stack(t_node *stack, char *str, bool advanced,
						bool to_first);
int					stack_len(t_node *stack);
t_node				*add_node(t_node *node, int content);
void				clear_lst_node(t_node *node);
void				ft_error(t_node *stack_a);
int					ft_atoi_ps(char *str, t_node *stack_a);
int					ft_strcmp(const char *s1, const char *s2);
bool				is_valid(t_node *stack_a, char *str);

#endif
