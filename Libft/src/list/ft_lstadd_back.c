/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:19:38 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 11:36:36 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *pt;
	if (*alst != NULL)
	{
		pt = *alst;
		while (pt->next != NULL)
			pt = pt->next;
		pt->next = new;
	}
	else
		(*alst) = new;
}
