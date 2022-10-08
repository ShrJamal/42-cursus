/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:58:22 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/08 18:22:36 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d < s)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			d[len] = s[len];
	return (d);
}

// int	main()
// {
// 	char src[] = "Hello!";
// 	printf("%s\n", (char *) ft_memmove(src + 1, src, 5));
// }
