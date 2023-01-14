/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:05:39 by jasahrao          #+#    #+#             */
/*   Updated: 2023/01/14 13:02:59 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_byte(int pid, char byte)
{
	int	i;

	i = 8;
	while (--i >= 0)
	{
		if ((byte >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	if (ac != 3)
	{
		ft_putstr_fd("Error: invalid arguments.\n", 2);
		ft_putstr_fd("Correct format: [./client <PID> <STR>].\n", 2);
		return (1);
	}
	pid = ft_atoi(av[1]);
	if (pid < 0)
		return (ft_putstr_fd("client: invalid PID.\n", 2), 1);
	i = -1;
	while (av[2][++i])
		ft_send_byte(pid, av[2][i]);
	ft_send_byte(pid, '\0');
	return (0);
}
