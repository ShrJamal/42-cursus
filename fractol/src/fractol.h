/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 21:55:13 by jasahrao          #+#    #+#             */
/*   Updated: 2023/03/09 12:07:31 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../mlx/mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define WIN_SIZE 1000.0
# define COLOR 100
# define MANDELBROT "mandelbrot"
# define JULIA "julia"
# define BURNING_SHIP "burning_ship"
# define CELTIC_MANDEBLROT "celtic"
# define KEY_ESC 53
# define KEY_R 15
# define KEY_SHIFT 257
# define ARROW_LEFT 123
# define ARROW_RIGHT 124
# define ARROW_UP 126
# define ARROW_DOWN 125
# define MOUSE_UP 5
# define MOUSE_DOWN 4
# define MOUSE_CLICK 1

typedef struct s_cplx
{
	double	re;
	double	im;
}			t_cplx;

typedef struct s_img
{
	void	*ptr;
	char	*addr;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}			t_img;

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
	t_img	img;
}			t_mlx;

typedef struct s_vars
{
	t_mlx	mlx;
	int		type;
	t_cplx	c_julia;
	t_cplx	move;
	double	scale;
	double	max_iter;
	int		shift;
	int		mouse_lock;
}			t_vars;

// Fractals
double		mandelbrot(t_vars *fr, t_cplx c);
double		julia(t_vars *fr, t_cplx c);
double		burning_ship(t_vars *fr, t_cplx c);
double		celtic_mandelbrot(t_vars *fr, t_cplx c);
void		render_fractal(t_vars *fr);
// Hooks
void		set_hooks(t_vars *fr);
int			key_hook(int key, t_vars *fr);
int			mouse_hook(int key, int x, int y, t_vars *fr);
int			mouse_move_hook(int x, int y, t_vars *fr);
int			ft_exit(t_mlx m);
// Utils
t_mlx		init_mlx(void);
void		ft_put_pixels(t_vars *fr, int x, int y, double ratio);
void		reset_vars(t_vars *fr);
double		ft_atod(char *s);
int			ft_strcmp(char *s1, char *s2);
void		ft_putstr_fd(char *s, int fd);
void		set_cplx(t_cplx *z, double re, double im);
int			sq_cplx(t_cplx c);
#endif
