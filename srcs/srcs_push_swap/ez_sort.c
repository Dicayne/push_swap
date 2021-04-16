/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:45:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/15 23:10:45 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		inverse_sort(t_list *a)
{
	if (*(int *)a->content > *(int *)a->next->content &&
		*(int *)a->next->content > *(int *)a->next->next->content)
		return (0);
	return (-1);
}

int		max_top_min_mid(t_list *a)
{
	if (*(int *)a->content > *(int *)a->next->content &&
		*(int *)a->next->content < *(int *)a->next->next->content &&
		*(int *)a->content > *(int *)a->next->next->content)
		return (0);
	else
		return (-1);
}

int		max_val_at_end(t_list *a)
{
	int v_a;
	int	v_b;

	v_a = *(int *)a->content;
	v_b = *(int *)a->next->next->content;
	if (v_a > v_b)
		return (-1);
	v_a = *(int *)a->next->content;
	if (v_a > v_b)
		return (-1);
	return (0);
}

void	ez_sort(t_list *a, int size)
{
	if (size == 2 || !max_val_at_end(a))
		printf("sa\n");
	else if (!inverse_sort(a))
		printf("ra\nsa\n");
	else if (!max_top_min_mid(a))
		printf("ra\n");
	else
	{
		printf("rra\n");
		r_rotate2(&a);
		if (is_sorted(a))
			printf("sa\n");
	}
}
