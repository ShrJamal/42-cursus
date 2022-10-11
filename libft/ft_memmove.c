/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:58:22 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/11 10:52:45 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d < s)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			d[len] = s[len];
	return (d);
}
