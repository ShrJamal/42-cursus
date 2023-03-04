/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:44:24 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 16:47:01 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	julia(t_vars *fr, t_cplx c)
{
	int		it;
	t_cplx	z;

	it = 0;
	set_cplx(&z, c.re, c.im);
	while (it <= fr->max_iter && sq_cplx(z) <= 4)
	{
		set_cplx(
			&z,
			z.re * z.re - z.im * z.im + fr->c_julia.re,
			2 * z.re * z.im + fr->c_julia.im);
		it++;
	}
	return (it);
}
