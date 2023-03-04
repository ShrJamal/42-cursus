/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:26:04 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 16:48:06 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	zoom(int btn, t_vars *fr, t_cplx p)
{
	double	zoom;

	if (btn == MOUSE_UP)
	{
		zoom = 0.8;
		fr->max_iter += 1;
	}
	else if (btn == MOUSE_DOWN)
	{
		zoom = 1.2;
		fr->max_iter -= 1;
	}
	else
		return ;
	fr->move.re = p.re + (fr->move.re - p.re) * zoom;
	fr->move.im = p.im + (fr->move.im - p.im) * zoom;
	fr->scale *= zoom;
}

static int	julia_motion(int x, int y, t_vars *fr)
{
	fr->c_julia.re = 4 * ((double)x / WIN_SIZE - 0.5);
	fr->c_julia.im = 4 * ((double)(WIN_SIZE - y) / WIN_SIZE - 0.5);
	return (0);
}

int	mouse_hook(int btn, int x, int y, t_vars *fr)
{
	t_cplx	p;

	p.re = fr->move.re + x * fr->scale;
	p.im = fr->move.im - y * fr->scale;
	if (btn == MOUSE_UP || btn == MOUSE_DOWN)
		zoom(btn, fr, p);
	else if (btn == MOUSE_CLICK && fr->type == 2)
		julia_motion(x, y, fr);
	else
		return (0);
	render_fractal(fr);
	return (0);
}
