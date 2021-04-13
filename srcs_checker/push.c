/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:15:42 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_a(t_stacks *stacks)
{
	(void)stacks;
}

void push_b(t_stacks *stacks)
{
	(void)stacks;
}

void push(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "pa"))
		push_a(stacks);
	else
		push_b(stacks);
}
