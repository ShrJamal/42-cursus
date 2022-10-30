#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd1 = open("test1.txt", O_RDONLY);
	int fd2 = open("test2.txt", O_RDONLY);
	int fd3 = open("test3.txt", O_RDONLY);
	for (int i = 0; i < 10; i++)
	{
		printf("%s", get_next_line(fd1));
		printf("%s", get_next_line(fd2));
		printf("%s", get_next_line(fd3));
	}
	// system("leaks a.out");
}