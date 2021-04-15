/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 14:16:08 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate2(t_list **s)
{
	t_list *tmp;

	if (ft_lstsize(*s) > 1)
	{
		tmp = *s;
		while (tmp)
		{
			swap2(&tmp);
			tmp = tmp->next;
		}
	}
}

void rotate(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "ra"))
		rotate2(&stacks->a);
	else if (!ft_strcmp(input, "rb"))
		rotate2(&stacks->b);
	else
	{
		rotate2(&stacks->a);
		rotate2(&stacks->b);
	}
}
