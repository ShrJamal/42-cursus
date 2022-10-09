/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:11:09 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 15:02:19 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}


/* int main()
{
  	{ // 1-Replace only 3 characters of src to dest
		unsigned int size = 3;
		char src[] = "abcdefgh";
		char dest[size];
		printf("n=%d =>len=%d dest=%s\n", size, ft_strlcpy(dest, src, size), dest);
	}	
	{ // 1-Replace only 3 characters of src to dest
		unsigned int size = 3;
		char src[] = "abcdefgh";
		char dest[] = "";
		printf("n=%d =>len=%d dest=%s\n", size, ft_strlcpy(dest, src, size), dest);
	}
	{ // 2-Replace all characters of src to dest
		unsigned int size = 5;
		char src[] = "abcdefgh";
		char dest[] = "123";
		printf("n=%d =>len=%d dest=%s\n", size, ft_strlcpy(dest, src, size), dest);
	}
	{ // -Replace all characters of src to dest and replace remaining with null
		unsigned int size = 7;
		char src[] = "abcdefgh";
		char dest[] = "0123456789";
		printf("n=%d =>len=%d dest=%s\n", size, ft_strlcpy(dest, src, size), dest);
	}
} */
