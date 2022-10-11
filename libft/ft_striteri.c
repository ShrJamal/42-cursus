/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:36:09 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/11 09:46:04 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void	upper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}

int	main(void)
{
	char str[] = "Aabcd";
	ft_striteri(str, &upper);
	printf("%s\n", str);
}
 */