
#include "fractol.h"

static void	ft_usage_error(void)
{
	ft_putstr_fd("Usage: ./fractol [fractal name]\n", 2);
	ft_putstr_fd("Available fractals: mandelbrot, julia\n", 2);
	exit(1);
}

static t_vars	init_fractal(int ac, char **av)
{
	t_vars	fr;

	if (ac == 2 && ft_strcmp(av[1], MANDELBROT) == 0)
		fr.type = 1;
	else
		ft_usage_error();
	if (ac == 4 && fr.type == 2)
		set_cplx(&fr.c_julia, ft_atod(av[2]), ft_atod(av[3]));
	else
		set_cplx(&fr.c_julia, -0.6, 0.6);
	reset_vars(&fr);
	return (fr);
}

int	main(int ac, char **av)
{
	t_vars	fr;

	fr = init_fractal(ac, av);
	fr.mlx = init_mlx();
	set_hooks(&fr);
	render_fractal(&fr);
	mlx_loop(fr.mlx.ptr);
	return (0);
}
