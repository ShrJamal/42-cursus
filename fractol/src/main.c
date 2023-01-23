#include <mlx.h>

int	main(void)
{
	void	*mlx;

	mlx = mlx_init();
	mlx_new_window(mlx, 800, 600, "Fractol");
	mlx_loop(mlx);
}
