/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:36:53 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 10:02:26 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

double	burning_ship(t_vars *fr, t_cplx c)
{
	t_cplx	z;
	t_cplx	tmp;
	int		it;

	set_cplx(&z, c.re, c.im);
	set_cplx(&tmp, z.re * z.re, z.im * z.im);
	it = 0;
	while (it < fr->max_iter && (tmp.re + tmp.im <= 4))
	{
		set_cplx(
			&z,
			tmp.re - tmp.im + c.re,
			-2 * fabs(z.re * z.im) + c.im);
		set_cplx(&tmp, z.re * z.re, z.im * z.im);
		it++;
	}
	return ((double)it / fr->max_iter);
}
