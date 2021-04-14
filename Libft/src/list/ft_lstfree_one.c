/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:51:27 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 15:50:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void			ft_lstfree_one(t_list **lst)
{
	t_list *tmp;

	tmp = *lst;
	if (!tmp)
		return ;
	if (tmp->content)
		free(tmp->content);
	free(tmp);
}
