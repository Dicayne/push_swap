/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 11:11:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 16:04:08 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void			ft_lstclear(t_list *lst)
{
	if (!lst)
		return ;
	if ((lst)->next)
		ft_lstclear((lst)->next);
	ft_lstfree_one(&lst);
	lst = NULL;
}
