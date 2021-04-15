/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 18:44:34 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate2(t_list **s)
{
	t_list *tmp;

	if (ft_lstsize(*s) > 1)
	{
		tmp = *s;
		if (tmp)
			r_rotate2(&tmp->next);
		swap2(&tmp);
	}
}

void	r_rotate(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "rra"))
		r_rotate2(&stacks->a);
	else if (!ft_strcmp(input, "rrb"))
		r_rotate2(&stacks->b);
	else
	{
		r_rotate2(&stacks->a);
		r_rotate2(&stacks->b);
	}
}
