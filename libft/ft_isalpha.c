/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:12 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/09 14:55:48 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}


/* int main()
{
	printf("%d\n", ft_isalnum(97));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('m'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('?'));
} */
