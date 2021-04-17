/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:54:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/18 01:21:08 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_pivot(t_list *a, int slice)
{
	while (a->pos != slice)
		a = a->next;
	return (*(int *)a->content);
}

int			find_val_under_pivot(t_list *s, int pivot)
{
	int i;

	i = *(int *)s->content;
	while (i > pivot && s->next)
	{
		s = s->next;
		i = *(int *)s->content;
	}
	return (i);
}

int			find_val_pos(int min, t_list *s)
{
	int pos;

	pos = 0;
	while (*(int *)s->content != min)
	{
		pos++;
		s = s->next;
	}
	return (pos);
}

int			find_min(t_list *s)
{
	int i;
	int j;

	i = *(int *)s->content;
	while (s->next)
	{
		j = *(int *)s->next->content;
		if (j < i)
			i = j;
		s = s->next;
	}
	return (i);
}

int			find_max(t_list *s)
{
	int i;
	int j;

	i = *(int *)s->content;
	while (s->next)
	{
		j = *(int *)s->next->content;
		if (j > i)
			i = j;
		s = s->next;
	}
	return (i);
}
