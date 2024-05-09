/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup_the_env.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:44:50 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/29 10:44:51 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_init_vars(t_fractal *fractal, char *set)
{
	if (!ft_strcmp(set, "Mandelbrot"))
	{
		fractal->start_x = -2;
		fractal->end_x = 0.9;
		fractal->start_y = -1.5;
		fractal->end_y = 1.5;
		fractal->zoom = 2.0;
	}
	else if (!ft_strcmp(set, "Julia"))
	{
		fractal->start_x = -2.5;
		fractal->end_x = 2.5;
		fractal->start_y = -2.5;
		fractal->end_y = 2.5;
		fractal->zoom = 2.0;
		fractal->c_real = 0.285;
		fractal->c_imag = 0.01;
	}
}

void	ft_setup_the_env(t_fractal *fractal, char *set)
{
	fractal->mlx_ptr = mlx_init();
	if (!fractal->mlx_ptr)
		ft_putstr("Error");
	fractal->mlx_win = mlx_new_window(fractal->mlx_ptr, WIDTH, HEIGHT, set);
	if (!fractal->mlx_win)
		ft_putstr("Error");
	fractal->img = mlx_new_image(fractal->mlx_ptr, WIDTH, HEIGHT);
	if (!fractal->img)
		ft_putstr("Error");
	fractal->addr = mlx_get_data_addr(fractal->img, &(fractal->bpp),
			&(fractal->line_length), &(fractal->endian));
	fractal->set = set;
	ft_init_vars(fractal, set);
}
