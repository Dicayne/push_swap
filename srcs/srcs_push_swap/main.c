/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:16:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/15 01:56:22 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks *stacks)
{
	rotate(stacks, "ra");
	printf("ra\n");
}

int		main(int ac, char **av)
{
	t_stacks stacks;

	stacks.a = NULL;
	stacks.b = NULL;
	if (ac != 1)
	{
		if (!store_val(&stacks.a, ++av))
		{
			while (is_sorted(stacks.a) || stacks.b)
			{
				sort(&stacks);
			}
			ft_lstclear(stacks.a);
			ft_lstclear(stacks.b);
		}
		else
			printf("Error\n");
	}
	return (0);
}
