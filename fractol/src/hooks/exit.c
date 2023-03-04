/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:37:01 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/04 10:52:49 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	exit_hook(t_mlx m)
{
	ft_putstr_fd("Exiting...\n", 1);
	mlx_destroy_window(m.ptr, m.win);
	mlx_destroy_image(m.ptr, m.img.ptr);
	exit(0);
	return (0);
}
