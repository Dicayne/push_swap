/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nm_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:35:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/16 01:58:49 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		nm_sort(t_stacks *stacks)
{
	while (is_sorted(stacks->a))
	{
		up_min(&stacks->a, stacks->size_a);
		if (is_sorted(stacks->a))
		{
			push(stacks, "pb");
			printf("pb\n");
		}
	}
	while (stacks->b)
	{
		push(stacks, "pa");
		printf("pa\n");
	}
}
