/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:06:17 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/16 19:55:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		up_max(t_list **a, int size)
{
	t_list	*tmp;
	int		pos_max;
	int		max_val;

	tmp = *a;
	max_val = find_max(tmp);
	pos_max = find_val_pos(max_val, tmp);
	if (pos_max > size / 2)
		do_rotate(a, "rrb", max_val);
	else
		do_rotate(a, "rb", max_val);
}

void		up_min(t_list **a, int size)
{
	t_list	*tmp;
	int		pos_min;
	int		min_val;

	tmp = *a;
	min_val = find_min(tmp);
	pos_min = find_val_pos(min_val, tmp);
	if (pos_min > size / 2)
		do_rotate(a, "rra", min_val);
	else
		do_rotate(a, "ra", min_val);
}

void		do_rotate(t_list **s, char *input, int val)
{
	while (*(int *)(*s)->content != val)
	{
		if (!ft_strcmp(input, "ra") || !ft_strcmp(input, "rb"))
			rotate2(s);
		else
			r_rotate2(s);
		printf("%s\n", input);
	}
}

int			no_val_under_pivot(t_list *s, int pivot)
{
	while (*(int *)s->content > pivot && s->next)
		s = s->next;
	if (!s->next)
		return (0);
	else
		return (-1);
}
