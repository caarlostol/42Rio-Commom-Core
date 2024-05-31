/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:31:31 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:31:32 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar_len(char c, int *len);
void	ft_putstr_len(char *str, int *len);
void	ft_putnbr_len(int n, int *len);
void	ft_putnbr_u_len(unsigned int n, int *len);
void	ft_putnbr_hexa_len(unsigned int nbr, int *len, bool up);
void	ft_putpointer_len(size_t pointer, int *len);
int		ft_printf(const char *str, ...);

#endif
