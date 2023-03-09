/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:52:45 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 11:56:48 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

static int	calc_color(t_vars *fr, double ratio)
{
	int	cs;
	int	rgb[3];

	cs = fr->shift;
	if (ratio == 1)
		return (0);
	rgb[cs % 3] = (1 - ratio) * pow(ratio, 3) * 255 * 9;
	rgb[(cs + 1) % 3] = pow((1 - ratio), 2) * pow(ratio, 2) * 255 * 15;
	rgb[(cs + 2) % 3] = pow((1 - ratio), 3) * ratio * 255 * 9;
	return (0 << 24 | rgb[0] << 16 | rgb[1] << 8 | rgb[2]);
}

void	ft_put_pixels(t_vars *fr, int x, int y, double ratio)
{
	int		idx;
	t_img	img;

	img = fr->mlx.img;
	idx = y * img.size_line + x * img.bits_per_pixel / 8;
	*((int *)(img.addr + idx)) = calc_color(fr, ratio);
}
