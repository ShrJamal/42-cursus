/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:44:41 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 11:35:54 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

double	mandelbrot(t_vars *fr, t_cplx c)
{
	int		it;
	t_cplx	z;

	it = 0;
	set_cplx(&z, 0, 0);
	while (it < fr->max_iter && sq_cplx(z) <= 4)
	{
		set_cplx(&z,
					z.re * z.re - z.im * z.im + c.re,
					2 * z.re * z.im + c.im);
		it++;
	}
	return ((double)it / fr->max_iter);
}
