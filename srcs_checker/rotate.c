/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:18:57 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_a(t_stacks *stacks)
{
	(void)stacks;
}

void rotate_b(t_stacks *stacks)
{
	(void)stacks;
}

void rotate_r(t_stacks *stacks)
{
	(void)stacks;
}

void rotate(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "ra"))
		rotate_a(stacks);
	else if (!ft_strcmp(input, "rb"))
		rotate_b(stacks);
	else
		rotate_r(stacks);
}
