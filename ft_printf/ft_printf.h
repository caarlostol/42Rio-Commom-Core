/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:37:31 by chayashi          #+#    #+#             */
/*   Updated: 2023/12/05 18:22:11 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(const char c);
int	ft_putstr(const char *c);
int	ft_putnbr(int nb);
int	ft_putnbr_hexa(unsigned long int nb, unsigned int base, int is_upper);
int	ft_putptr(unsigned long int ptr);

#endif
