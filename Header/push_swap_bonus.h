/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:15 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/27 15:50:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "push_swap.h"
# include <SDL2/SDL.h>

/*
**-----------------------------------STRUCT-------------------------------------
*/

typedef struct	s_sdl
{
	int				bonus_v;
	SDL_Window		*window;
	int				w;
	int				h;
	SDL_Renderer	*renderer;
}				t_sdl;

/*
**---------------------------------VISUALIZER-----------------------------------
*/
void			init_visualizer(t_sdl *sdl);
void			draw(t_stacks *stack, t_sdl *sdl);
void			clean(t_sdl *sdl, t_stacks *stacks);

#endif
