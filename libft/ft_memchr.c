/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:56:41 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:57:16 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/* int main(){
	printf("%s\n", (unsigned char*) ft_memchr("Hello", 'e', 5));
	printf("%s\n", (unsigned char*) ft_memchr("Hello", 'l', 5));
	printf("%s\n", (unsigned char*) ft_memchr("Hello", '\0', 5));
} */
