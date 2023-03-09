/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:26:04 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 12:10:14 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static void	zoom(int btn, t_vars *fr, t_cplx p)
{
	double	zoom;

	if (btn == MOUSE_UP)
	{
		zoom = 0.8;
		fr->max_iter += 2.0;
	}
	else if (btn == MOUSE_DOWN)
	{
		zoom = 1.2;
		fr->max_iter -= 2.0;
	}
	else
		return ;
	fr->move.re = p.re + (fr->move.re - p.re) * zoom;
	fr->move.im = p.im + (fr->move.im - p.im) * zoom;
	fr->scale *= zoom;
}

int	mouse_hook(int btn, int x, int y, t_vars *fr)
{
	t_cplx	p;

	p.re = fr->move.re + x * fr->scale;
	p.im = fr->move.im - y * fr->scale;
	if (btn == MOUSE_UP || btn == MOUSE_DOWN)
		zoom(btn, fr, p);
	else if (btn == MOUSE_CLICK && fr->type == 2)
		fr->mouse_lock = (fr->mouse_lock + 1) % 2;
	render_fractal(fr);
	return (0);
}

int	mouse_move_hook(int x, int y, t_vars *fr)
{
	if (fr->mouse_lock)
		return (0);
	fr->c_julia.re = fr->move.re + x * fr->scale;
	fr->c_julia.im = fr->move.im - y * fr->scale;
	render_fractal(fr);
	return (0);
}
