/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:12:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 15:47:16 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list		*first;
	t_list		*map;

	if (lst == NULL)
		return (NULL);
	if (!(map = ft_lstnew(f(lst))))
		return (NULL);
	first = map;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			if (!(map->next = ft_lstnew((*f)(lst->next))))
			{
				ft_lstclear(first);
				return (0);
			}
			map = map->next;
		}
		lst = lst->next;
	}
	map = 0;
	return (first);
}
