/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:35:37 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 13:24:01 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(size * count);
	if (!res)
		return (0);
	ft_bzero(res, count);
	return (res);
}

// int	main(void)
// {
// 	{
// 		char	* str = ft_calloc(3, sizeof(char));
// 		printf("str %s", str);
// 	}
// 	{
// 		int *nums = ft_calloc(3, sizeof(int));
// 		for (int i = 0; i < 3; i++)
// 			printf("nums%d: %d",i ,nums[i]);
// 	}
// }
