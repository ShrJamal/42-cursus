/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:30:38 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/30 23:16:16 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	print_line(int fd, int idx)
{
	char	*p;

	p = get_next_line(fd);
	printf("%d:%s", idx + 1, p);
	if (p == NULL)
		printf("\n");
	free(p);
}

int	main(void)
{
	int	fd1;
	int	fd2;
	int	fd3;

	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	for (int i = 0; i < 10; i++)
	{
		print_line(fd1, i);
	}
	system("leaks a.out");
}
