/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:22:36 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/29 10:22:40 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mapping_mandelbrot(t_fractal *fractal)
{
	fractal->x = fractal->x_mlx * ((fractal->end_x - fractal->start_x) / WIDTH)
		+ fractal->start_x;
	fractal->y = fractal->y_mlx * ((fractal->end_y - fractal->start_y) / HEIGHT)
		+ fractal->start_y;
	fractal->c_real = fractal->x;
	fractal->c_imag = fractal->y;
}

void	ft_mapping_julia(t_fractal *fractal)
{
	fractal->x = fractal->x_mlx * ((fractal->end_x - fractal->start_x) / WIDTH)
		+ fractal->start_x;
	fractal->y = fractal->y_mlx * ((fractal->end_y - fractal->start_y) / HEIGHT)
		+ fractal->start_y;
}
