/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:19:38 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 11:12:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *pt;
	int *i;
	if (*alst != NULL)
	{
		pt = *alst;
		while (pt->next != NULL)
		{
			i = pt->content;
			ft_putnbr(*i);
			ft_putchar('\n');
			pt = pt->next;
		}
		pt->next = new;
	}
	else
		(*alst) = new;
	ft_putchar('\n');
}
