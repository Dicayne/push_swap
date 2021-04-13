/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:17:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stacks *stacks)
{
	(void)stacks;
}

void swap_b(t_stacks *stacks)
{
	(void)stacks;
}

void swap_s(t_stacks *stacks)
{
	(void)stacks;
}

void swap(t_stacks *stacks, char *input)
{
	if (!ft_strcmp(input, "sa"))
		swap_a(stacks);
	else if (!ft_strcmp(input, "sb"))
		swap_b(stacks);
	else
		swap_s(stacks);
}
