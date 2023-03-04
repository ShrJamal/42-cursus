/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 22:03:15 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 17:51:01 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

t_mlx	init_mlx(void)
{
	t_mlx	mlx;

	mlx.ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.ptr, WIN_SIZE, WIN_SIZE, "fractol");
	mlx.img.ptr = mlx_new_image(mlx.ptr, WIN_SIZE, WIN_SIZE);
	mlx.img.addr = mlx_get_data_addr(mlx.img.ptr, &mlx.img.bits_per_pixel,
			&mlx.img.size_line, &mlx.img.endian);
	if (!mlx.ptr || !mlx.win || !mlx.img.ptr || !mlx.img.addr)
		exit(1);
	return (mlx);
}

void	set_hooks(t_vars *fr)
{
	mlx_key_hook(fr->mlx.win, key_hook, fr);
	mlx_mouse_hook(fr->mlx.win, mouse_hook, fr);
	mlx_hook(fr->mlx.win, 17, 0, ft_exit, fr);
}

void	reset_vars(t_vars *fr)
{
	set_cplx(&fr->move, -2, 2);
	fr->scale = 4 / (double)WIN_SIZE;
	fr->max_iter = MAX_ITERS;
}

int	ft_exit(t_mlx m)
{
	mlx_destroy_window(m.ptr, m.win);
	mlx_destroy_image(m.ptr, m.img.ptr);
	exit(0);
	return (0);
}
