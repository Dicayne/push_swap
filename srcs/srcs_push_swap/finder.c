/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:54:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/16 02:01:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			find_pivot(t_list *a, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		a = a->next;
		i++;
	}
	return (*(int *)a->content);
}

int			find_val(t_list *s, int pivot)
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
