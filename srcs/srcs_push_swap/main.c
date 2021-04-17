/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:16:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/17 18:46:32 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_algo(t_stacks *stacks)
{
	if (stacks->size_a <= 3)
		ez_sort(stacks->a, stacks->size_a);
	else if (stacks->size_a < 25)
		nm_sort(stacks);
	else
		big_sort(stacks);
}

int		main(int ac, char **av)
{
	t_stacks stacks;

	if (ac != 1)
	{
		stacks.a = NULL;
		stacks.b = NULL;
		stacks.size_a = 0;
		stacks.size_b = 0;
		if (!store_val(&stacks.a, &stacks.size_a, ++av))
		{
			stacks.size_max = stacks.size_a;
			if (is_sorted(stacks.a) || stacks.b)
				find_algo(&stacks);
			ft_lstclear(stacks.a);
			ft_lstclear(stacks.b);
		}
		else
			printf("Error\n");
	}
	return (0);
}
