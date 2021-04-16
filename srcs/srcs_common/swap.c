/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/15 23:08:53 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap2(t_list **s)
{
	t_list	*tmp;
	int		*tmp_num;

	if (ft_lstsize(*s) > 1)
	{
		tmp = *s;
		tmp_num = tmp->content;
		tmp->content = tmp->next->content;
		tmp->next->content = tmp_num;
	}
}

void	swap(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "sa"))
		swap2(&stacks->a);
	else if (!ft_strcmp(input, "sb"))
		swap2(&stacks->b);
	else
	{
		swap2(&stacks->a);
		swap2(&stacks->b);
	}
}
