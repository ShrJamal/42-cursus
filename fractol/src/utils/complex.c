/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:35:09 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 17:28:26 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	set_cplx(t_cplx *z, double re, double im)
{
	z->re = re;
	z->im = im;
}

int	sq_cplx(t_cplx c)
{
	return (c.re * c.re + c.im * c.im);
}
