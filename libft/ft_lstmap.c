/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:44:09 by jasahrao          #+#    #+#             */
/*   Updated: 2022/10/12 12:06:32 by jasahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	int len;
	int i;

	if (!lst || !f)
		return (NULL);
	len = ft_lstsize(lst);
	res = malloc(len * sizeof(t_list));
	if (res)
		return (NULL);
	while (i < len)
	{
		(res + i)->content = f(lst->content);
		(res + i)->next = lst->next;
		ft_lstdelone(lst, del);
		lst = (res + i)->next;
		i++;
	}
	return (res);
}
