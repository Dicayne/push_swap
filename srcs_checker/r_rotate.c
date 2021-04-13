/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:19:20 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void r_rotate_a(t_stacks *stacks)
{
	(void)stacks;
}

void r_rotate_b(t_stacks *stacks)
{
	(void)stacks;
}

void r_rotate_r(t_stacks *stacks)
{
	(void)stacks;
}

void r_rotate(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "rra"))
		r_rotate_a(stacks);
	else if (!ft_strcmp(input, "rrb"))
		r_rotate_b(stacks);
	else
		r_rotate_r(stacks);
}
