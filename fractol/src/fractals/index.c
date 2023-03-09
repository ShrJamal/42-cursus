/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:14:45 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 10:02:45 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	ft_put_pixels(t_vars *fr, int x, int y, double ratio)
{
	int		idx;
	t_img	img;

	img = fr->mlx.img;
	idx = x * 4 + img.size_line * y;
	img.addr[idx] = (ratio * fr->color);
	img.addr[idx + 1] = (ratio * fr->color * 0.5);
	img.addr[idx + 2] = (ratio * fr->color * 14);
	img.addr[idx + 3] = 0;
}

void	render_fractal(t_vars *fr)
{
	int x;
	int y;
	double ratio;
	t_cplx c;

	x = 0;
	while (x < WIN_SIZE)
	{
		c.re = fr->move.re + x * fr->scale;
		y = 0;
		while (y < WIN_SIZE)
		{
			c.im = fr->move.im - y * fr->scale;
			if (fr->type == 1)
				ratio = mandelbrot(fr, c);
			else if (fr->type == 2)
				ratio = julia(fr, c);
			else if (fr->type == 3)
				ratio = burning_ship(fr, c);
			else if (fr->type == 4)
				ratio = celtic_mandelbrot(fr, c);
			ft_put_pixels(fr, x, y, ratio);
			y++;
		}
		x++;
	}
	mlx_put_image_to_window(fr->mlx.ptr, fr->mlx.win, fr->mlx.img.ptr, 0, 0);
}