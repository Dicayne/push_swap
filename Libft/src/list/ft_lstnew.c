/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:29:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 02:01:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_list		*ft_lstrewrite(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = content;
	}
	return (new);
}
