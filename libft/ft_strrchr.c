/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:06:26 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/11 10:52:31 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i-- > 0)
		if (s[i] == c)
			return ((char *)&s[i]);
	if (c == '\0' && i >= 0)
		return ((char *)&s[i]);
	return (NULL);
}
