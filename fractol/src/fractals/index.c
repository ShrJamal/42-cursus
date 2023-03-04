/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:14:45 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 17:33:45 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	ft_put_pixels(t_img *img, int x, int y, int iter)
{
	int	idx;

	idx = (img->size_line * y) + x * 4;
	img->addr[idx] = (iter * COLOR);
	img->addr[idx + 1] = (iter * COLOR * 0.5);
	img->addr[idx + 2] = (iter * COLOR * 14);
	img->addr[idx + 3] = 0;
}

void	render_fractal(t_vars *fr)
{
	int x;
	int y;
	int iter;
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
				iter = mandelbrot(fr, c);
			else if (fr->type == 2)
				iter = julia(fr, c);
			else if (fr->type == 3)
				iter = burning_ship(fr, c);
			else if (fr->type == 4)
				iter = celtic_mandelbrot(fr, c);
			ft_put_pixels(&fr->mlx.img, x, y, iter);
			y++;
		}
		x++;
	}
	mlx_put_image_to_window(fr->mlx.ptr, fr->mlx.win, fr->mlx.img.ptr, 0, 0);
}