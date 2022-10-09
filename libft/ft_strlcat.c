/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:14:50 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 15:02:04 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	i = 0;
	while (src[i] && i < dst_len + dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dstsize);
}

/* int main()
{
    {
        char src[] = "Network";
        char dest[] = "42 ";
        printf("len_return=%d dest=%s\n", ft_strlcat(dest, src, 20), dest);
    }
    {
        char src[] = "Network";
        char dest[] = "42 ";
        printf("len_return=%d dest=%s\n", ft_strlcat(dest, src, 3), dest);
    }
    {
        char src[] = "Network";
        char dest[] = "";
        printf("len_return=%d dest=%s\n", ft_strlcat(dest, src, 4), dest);
    }
    {
        char src[] = "Ho";
        char dest[] = "Homee";
        printf("len_return=%d dest=%s\n", ft_strlcat(dest, src, 7), dest);
    }
} */
