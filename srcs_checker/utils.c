/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:12:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:04:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_list *a)
{
	int *i;
	int *j;

	while (a->next)
	{
		i = a->content;
		j = a->next->content;
		if (*i > *j)
			return (-1);
		a = a->next;
	}
	return (0);
}

void	display_lst(t_list *a)
{
	int *i;

	while (a)
	{
		i = (int *)a->content;
		printf("%d\n", *i);
		a = a->next;
	}
}
