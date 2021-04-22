/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:15 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/22 19:36:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include "../Libft/header/libft.h"
# include "limits.h"
# include <SDL2/SDL.h>

/*
**-----------------------------------STRUCT-------------------------------------
*/
typedef struct	s_stacks
{
	t_list	*a;
	int		size_a;
	t_list	*b;
	int		size_b;
	int		size_max;
	int		bonus_v;
}				t_stacks;

typedef struct	s_sdl
{
	SDL_Window		*window;
	int				w;
	int				h;
	SDL_Renderer	*renderer;
}				t_sdl;

/*
**----------------------------------FUNCTION------------------------------------
*/
int				store_val(t_list **a, int *size_a, char **av);
void			stock_pos_val(t_list **a, int size);
char			**stock_av(char **av);
void			free_args(char **args);
void			display(t_list *a);
void			display_lst(t_list *a, t_list *b);
int				is_sorted(t_list *a);

/*
**-----------------------------------VERIF--------------------------------------
*/
int				verif_swap_input(char *input);
int				verif_push_input(char *input);
int				verif_rotate_input(char *input);
int				verif_r_rotate_input(char *input);

/*
**----------------------------------SORTING-------------------------------------
*/
void			ez_sort(t_list *a, int size);
void			nm_sort(t_stacks *stacks);
void			big_sort(t_stacks *stacks);

/*
**-----------------FINDER
*/
int				find_min(t_list *s, int *pos_min);
int				find_max(t_list *s, int *pos_max);
int				find_val_under_pivot(t_list *s, int pos_pivot, int *pos_val);
int				find_pos_val(t_list *a, int size, int val);

/*
**-----------------UPPER
*/
void			up_max(t_list **a, int size);
void			up_min(t_list **a, int size);

/*
**-----------------------------------ACTION-------------------------------------
*/
void			swap(t_stacks *stacks, char *input);
void			swap2(t_list **s);
void			push(t_stacks *stacks, char *input);
void			rotate(t_stacks *stacks, char *input);
void			rotate2(t_list **s);
void			r_rotate(t_stacks *stacks, char *input);
void			r_rotate2(t_list **s);
void			do_rotate(t_list **a, char *input, int val);

/*
**---------------------------------VISUALIZER-----------------------------------
*/
void			init_visualizer(t_sdl *sdl);
void			draw(t_stacks *stack, t_sdl *sdl);
void			clean(t_sdl *sdl, t_stacks *stacks);

#endif
