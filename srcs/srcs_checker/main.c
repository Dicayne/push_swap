/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:16:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/27 15:01:22 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	catch_input(t_stacks *stacks, char *input)
{
	if (input[0] == 's' && verif_swap_input(input))
		swap(stacks, input);
	else if (input[0] == 'p' && verif_push_input(input))
		push(stacks, input);
	else if (input[0] == 'r' &&
					(verif_rotate_input(input) || verif_r_rotate_input(input)))
	{
		if (ft_strlen(input) == 2)
			rotate(stacks, input);
		else if (ft_strlen(input) == 3)
			r_rotate(stacks, input);
	}
	else if (input[0] == '\0')
		printf("No input\n");
	else
		printf("Error\n");
}

void	wait_input(t_stacks *stacks)
{
	char *line;

	while (get_next_line(0, &line))
	{
		catch_input(stacks, line);
		free(line);
	}
	free(line);
}

void	init(t_stacks *stacks)
{
	stacks->a = NULL;
	stacks->b = NULL;
	stacks->size_a = 0;
	stacks->size_b = 0;
}

int		main(int ac, char **av)
{
	t_stacks	stacks;

	if (ac != 1)
	{
		init(&stacks);
		av++;
		if (!store_val(&stacks.a, &stacks.size_a, av))
		{
			stacks.size_max = stacks.size_a;
			wait_input(&stacks);
			if (!stacks.b && !is_sorted(stacks.a))
				printf("OK\n");
			else
				printf("KO\n");
			ft_lstclear(stacks.a);
			ft_lstclear(stacks.b);
		}
		else
			printf("Error\n");
	}
	return (0);
}
