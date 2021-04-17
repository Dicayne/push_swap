/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:41:57 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/17 02:10:23 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		up_under_pivot(t_list **a, int size, int pivot)
{
	t_list	*tmp;
	int		pos_val;
	int		val;

	tmp = *a;
	val = find_val(tmp, pivot);
	pos_val = find_val_pos(val, tmp);
	if (pos_val > size / 2)
		do_rotate(a, "rra", val);
	else
		do_rotate(a, "ra", val);
}

void		push_under_pivot(t_stacks *stacks, int pivot)
{
	while (no_val_under_pivot(stacks->a, pivot))
	{
		up_under_pivot(&stacks->a, stacks->size_a, pivot);
		push(stacks, "pb");
		printf("pb\n");
	}
}

void		big_sort(t_stacks *stacks)
{
	int pivot;

	while (stacks->a->next && stacks->size_a > 2)
	{
		pivot = find_pivot(stacks->a, stacks->size_a);
		push_under_pivot(stacks, pivot);
	}
	push(stacks, "pb");
	printf("pb\n");
	if (stacks->a->pos != stacks->size_max - (stacks->size_max - 1))
	{
		push(stacks, "pb");
		printf("pb\n");
	}
	while (stacks->b)
	{
		up_max(&stacks->b, stacks->size_b);
		push(stacks, "pa");
		printf("pa\n");
	}
	// display_lst(stacks->a, stacks->b);
}
