/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:16:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/18 01:38:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	wait_input(t_stacks *stacks, t_sdl *sdl)
{
	char	*line;
	int		speed;

	if (stacks->size_max >= 100)
		speed = 10;
	else
		speed = 50;
	if (stacks->bonus_v > 0)
		draw(stacks, sdl);
	while (get_next_line(0, &line))
	{
		printf("Input: %s\n", line);
		catch_input(stacks, line);
		if (stacks->bonus_v > 0)
		{
			SDL_RenderClear(sdl->renderer);
			draw(stacks, sdl);
			usleep(speed * 1000);
		}
		free(line);
	}
	free(line);
}

int		check_bonus(char **av)
{
	int i;

	i = 0;
	if (!ft_strcmp(av[i], "-v"))
		return (1);
	while (av[i + 1])
		i++;
	if (!ft_strcmp(av[i], "-v"))
	{
		av[i] = NULL;
		return (2);
	}
	return (0);
}

void	init(t_stacks *stacks, char **av)
{
	stacks->a = NULL;
	stacks->b = NULL;
	stacks->size_a = 0;
	stacks->size_b = 0;
	stacks->bonus_v = check_bonus(av);
}

int		main(int ac, char **av)
{
	t_stacks	stacks;
	t_sdl		sdl;

	if (ac != 1)
	{
		init(&stacks, ++av);
		if (stacks.bonus_v == 1)
			av++;
		if (av[0] && !store_val(&stacks.a, &stacks.size_a, av))
		{
			stacks.size_max = stacks.size_a;
			if (stacks.bonus_v > 0)
				init_visualizer(&sdl);
			wait_input(&stacks, &sdl);
			if (!stacks.b && !is_sorted(stacks.a))
				printf("OK\n");
			else
				printf("KO\n");
			clean(&sdl, &stacks);
		}
		else
			printf("Error\n");
	}
	return (0);
}
