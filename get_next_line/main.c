#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	print_line(int fd)
{
	char	*p;

	p = get_next_line(fd);
	printf("%s", p);
	free(p);
}

int	main(void)
{
	int fd1 = open("test1.txt", O_RDONLY);
	// int fd2 = open("test2.txt", O_RDONLY);
	// int fd3 = open("test3.txt", O_RDONLY);
	for (int i = 0; i < 10; i++)
	{
		print_line(fd1);
	}
	// system("leaks a.out");

}