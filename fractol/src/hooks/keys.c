/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:29:38 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 11:12:43 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	key_hook(int key, t_vars *fr)
{
	double	move;

	move = 0.05 * WIN_SIZE * fr->scale;
	if (key == KEY_ESC)
		ft_exit(fr->mlx);
	if (key == KEY_R)
		reset_vars(fr);
	else if (key == ARROW_LEFT)
		fr->move.re -= move;
	else if (key == ARROW_RIGHT)
		fr->move.re += move;
	else if (key == ARROW_UP)
		fr->move.im += move;
	else if (key == ARROW_DOWN)
		fr->move.im -= move;
	else if (key == KEY_SHIFT)
		fr->shift = (fr->shift + 1) % 3;
	else
		return (0);
	render_fractal(fr);
	return (0);
}
