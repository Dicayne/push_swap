/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:15 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/16 02:03:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../Libft/header/libft.h"
# include "limits.h"

/*
**-----------------------------------STRUCT-------------------------------------
*/
typedef struct	s_stacks
{
	t_list	*a;
	int		size_a;
	t_list	*b;
	int		size_b;
}				t_stacks;

/*
**----------------------------------FUNCTION------------------------------------
*/
int				store_val(t_list **a, int *size_a, char **av);
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
int				find_min(t_list *s);
int				find_max(t_list *s);
int				find_val(t_list *s, int pivot);
int				find_val_pos(int min, t_list *s);
int				find_pivot(t_list *a, int size);

/*
**-----------------UPPER
*/
void			up_max(t_list **a, int size);
void			up_min(t_list **a, int size);
int				no_val_under_pivot(t_list *s, int pivot);

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

#endif
