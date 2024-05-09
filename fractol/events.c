/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:55:13 by chayashi          #+#    #+#             */
/*   Updated: 2024/03/29 18:03:38 by chayashi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "fractol.h"

void	events_init(t_fractal *fractal)
{
	mlx_hook(fractal->mlx_win,
			KeyPress,
			KeyPressMask,
			key_handler,
			fractal);
	mlx_hook(fractal->mlx_win,
			ButtonPress,
			ButtonPressMask,
			mouse_hook,
			fractal);
}

int	close_handler(t_fractal *fractal)
{
	mlx_destroy_window(fractal->mlx_ptr, fractal->mlx_win);
	mlx_destroy_display(fractal->mlx_ptr);
	free(fractal->mlx_ptr);
	exit(EXIT_SUCCESS);
}


/*
 * Keypress prototype
 * int (*f)(int keycode, void *param)
*/
int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == XK_Escape)
		close_handler(fractal);
	if (keysym == XK_Left)
		fractal->shift_x += (0.5 * fractal->zoom);	
	else if (keysym == XK_Right)
		fractal->shift_x -= (0.5 * fractal->zoom);	
	else if (keysym == XK_Up)
		fractal->shift_y -= (0.5 * fractal->zoom);	
	else if (keysym == XK_Down)
		fractal->shift_y += (0.5 * fractal->zoom);	
	else if (keysym == XK_plus)
		fractal->iterator += 10;
	else if (keysym == XK_minus)	
		fractal->iterator -= 10;

	return 0;
}
