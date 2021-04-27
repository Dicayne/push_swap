/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdl2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:16:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/27 15:47:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	clean(t_sdl *sdl, t_stacks *stacks)
{
	ft_lstclear(stacks->a);
	ft_lstclear(stacks->b);
	if (sdl->bonus_v > 0)
	{
		SDL_Delay(2000);
		SDL_RenderClear(sdl->renderer);
		SDL_DestroyRenderer(sdl->renderer);
		SDL_DestroyWindow(sdl->window);
		SDL_Quit();
	}
}

void	draw_val(t_list *a, t_sdl *sdl, t_stacks *stacks, char s)
{
	int			i;
	int			pos_stack;
	SDL_Rect	val;
	int			color;

	i = 0;
	if (s == 'a')
		pos_stack = 0;
	else
		pos_stack = sdl->w / 2 + 10;
	while (a)
	{
		val.x = ((sdl->w / 2 - 10) / stacks->size_max) * i + pos_stack;
		val.h = (a->pos * sdl->h) / stacks->size_max;
		val.y = sdl->h - val.h;
		val.w = (sdl->w / 2 - 10) / stacks->size_max;
		color = (a->pos * 255) / stacks->size_max;
		if (s == 'a')
			SDL_SetRenderDrawColor(sdl->renderer, color, 0, 0, 255);
		else
			SDL_SetRenderDrawColor(sdl->renderer, 0, 0, color, 255);
		SDL_RenderFillRect(sdl->renderer, &val);
		a = a->next;
		i++;
	}
}

void	draw(t_stacks *stacks, t_sdl *sdl)
{
	SDL_Rect val;

	draw_val(stacks->a, sdl, stacks, 'a');
	SDL_SetRenderDrawColor(sdl->renderer, 125, 200, 140, 255);
	val.x = sdl->w / 2 - 10;
	val.h = sdl->h;
	val.y = 0;
	val.w = 20;
	SDL_RenderFillRect(sdl->renderer, &val);
	draw_val(stacks->b, sdl, stacks, 'b');
	SDL_RenderPresent(sdl->renderer);
	SDL_SetRenderDrawColor(sdl->renderer, 155, 195, 210, 255);
}

void	fill_renderer(t_sdl *sdl)
{
	SDL_Rect screen;

	screen.x = 0;
	screen.y = 0;
	screen.w = sdl->w;
	screen.h = sdl->h;
	SDL_SetRenderDrawColor(sdl->renderer, 155, 195, 210, 255);
	SDL_RenderFillRect(sdl->renderer, &screen);
	SDL_RenderPresent(sdl->renderer);
}

void	init_visualizer(t_sdl *sdl)
{
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
	{
		sdl->window = SDL_CreateWindow("Visualizer Push_Swap Algorithm",
										100, 100, 820, 600, 0);
		if (sdl->window == NULL)
			printf("ERROR WINDOW CREATION SDL : %s\n", SDL_GetError());
		sdl->renderer = SDL_CreateRenderer(sdl->window, -1, 1);
		if (sdl->renderer == NULL)
			printf("ERROR RENDERER CREATION SDL : %s\n", SDL_GetError());
		SDL_GetWindowSize(sdl->window, &sdl->w, &sdl->h);
		fill_renderer(sdl);
	}
	else
		printf("ERROR INIT SDL : %s\n", SDL_GetError());
}
