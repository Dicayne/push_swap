/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:06:17 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/23 00:16:04 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		do_rotate2(t_list **s, char *input, int val)
{
	while (*(int *)(*s)->content != val)
	{
		if (*(int *)(*s)->next->content == val &&
			(*s)->next->pos == ((*s)->pos + 1))
		{
			swap2(s);
			printf("sb\n");
		}
		else
		{
			if (!ft_strcmp(input, "rb"))
				rotate2(s);
			else
				r_rotate2(s);
			printf("%s\n", input);
		}
	}
}

void		up_max(t_list **a, int size)
{
	t_list	*tmp;
	int		pos_max;
	int		max_val;

	tmp = *a;
	max_val = find_max(tmp, &pos_max);
	if (pos_max > size / 2)
		do_rotate2(a, "rrb", max_val);
	else
		do_rotate2(a, "rb", max_val);
}

void		up_min(t_list **a, int size)
{
	t_list	*tmp;
	int		pos_min;
	int		min_val;

	tmp = *a;
	min_val = find_min(tmp, &pos_min);
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
