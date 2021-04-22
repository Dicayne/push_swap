/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:41:57 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/23 00:16:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		up_under_pivot(t_list **a, int size, int pos_pivot)
{
	t_list	*tmp;
	int		pos_val;
	int		val;

	tmp = *a;
	val = find_val_under_pivot(tmp, pos_pivot, &pos_val);
	if (pos_val > size / 2)
		do_rotate(a, "rra", val);
	else
		do_rotate(a, "ra", val);
}

void		push_und_piv(t_stacks *stacks, int pos_pivot, int slice, int nbval)
{
	while (nbval > 0)
	{
		up_under_pivot(&stacks->a, stacks->size_a, pos_pivot);
		push(stacks, "pb");
		printf("pb\n");
		if (stacks->b->pos < pos_pivot - slice)
		{
			rotate2(&stacks->b);
			printf("rb\n");
		}
		nbval--;
	}
}

void		big_sort2(t_stacks *stacks)
{
	push(stacks, "pb");
	printf("pb\n");
	while (stacks->b)
	{
		up_max(&stacks->b, stacks->size_b);
		push(stacks, "pa");
		printf("pa\n");
	}
}

void		big_sort(t_stacks *stacks)
{
	int pos_pivot;
	int	slice;
	int	slice_max;
	int i;

	i = 1;
	slice = stacks->size_max / 5;
	while (i <= 5)
	{
		if (i < 5)
		{
			pos_pivot = slice * i;
			push_und_piv(stacks, pos_pivot, slice / 2, slice);
		}
		else
		{
			slice_max = stacks->size_max - pos_pivot;
			push_und_piv(stacks, stacks->size_max, slice / 2, slice_max);
		}
		i++;
	}
	big_sort2(stacks);
}
