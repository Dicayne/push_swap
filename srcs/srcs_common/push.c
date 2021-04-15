/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 18:26:29 by vmoreau          ###   ########.fr       */
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

	if (*a)
	{
		num = (int *)malloc(sizeof(int));
		*num = *(int *)(*a)->content;
		ft_lstadd_front(b, ft_lstnew(num));
		up_stack(a);
	}
}

void	push(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "pa"))
		push2(&stacks->b, &stacks->a);
	else
		push2(&stacks->a, &stacks->b);
}
