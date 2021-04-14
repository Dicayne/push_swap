/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 16:26:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up_stack(t_list **s)
{
	t_list *tmp;

	tmp = *s;
	if (ft_lstsize(*s) > 1)
	{
		rotate2(&tmp);
	}
	if (tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		ft_lstfree_one(&tmp->next);
		tmp->next = NULL;
	}
	else
	{
		ft_lstclear(*s);
		*s = NULL;
	}
}

void	push2(t_list **a, t_list **b)
{
	int *num;
	t_list *tmp;

	if (a || *a)
	{
		tmp = *a;
		num = (int *)malloc(sizeof(int));
		*num = *(int *)tmp->content;
		ft_lstadd_back(b, ft_lstnew(num));
		up_stack(&tmp);
	}
}

void	push(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "pa"))
		push2(&stacks->b, &stacks->a);
	else
		push2(&stacks->a, &stacks->b);
}
