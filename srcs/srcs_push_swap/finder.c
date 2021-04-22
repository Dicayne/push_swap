/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:54:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/22 19:34:55 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_val_under_pivot(t_list *s, int pos_pivot, int *pos_val)
{
	int i;
	int	pos;

	i = s->pos;
	pos = 0;
	while (i > pos_pivot && s->next)
	{
		s = s->next;
		i = s->pos;
		pos++;
	}
	*pos_val = pos;
	return (*(int *)s->content);
}

int			find_min(t_list *s, int *pos_min)
{
	int i;
	int j;
	int k;
	int l;

	k = 0;
	l = 1;
	i = *(int *)s->content;
	while (s->next)
	{
		j = *(int *)s->next->content;
		if (j < i)
		{
			i = j;
			k = l;
		}
		s = s->next;
		l++;
	}
	*pos_min = k;
	return (i);
}

int			find_max(t_list *s, int *pos_max)
{
	int i;
	int j;
	int k;
	int l;

	k = 0;
	l = 1;
	i = *(int *)s->content;
	while (s->next)
	{
		j = *(int *)s->next->content;
		if (j > i)
		{
			i = j;
			k = l;
		}
		s = s->next;
		l++;
	}
	*pos_max = k;
	return (i);
}
