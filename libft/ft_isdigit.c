/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:55:37 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:56:22 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int main()
{
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('?'));
} */