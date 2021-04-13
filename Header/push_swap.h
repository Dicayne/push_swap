/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:15 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 17:05:14 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HPP
#define PUSH_SWAP_HPP

#include <stdio.h>
#include <stdlib.h>
#include "../Libft/header/libft.h"
#include "limits.h"
/*-----------------------------------STRUCT-----------------------------------*/

typedef struct	s_stacks
{
	t_list *a;
	t_list *b;
}				t_stacks;

/*----------------------------------FUNCTION----------------------------------*/

int		store_val(t_list **a, char **av);
void	display_lst(t_list *a);
int		is_sorted(t_list *a);
int		verif_swap_input(char *input);
int		verif_push_input(char *input);
int		verif_rotate_input(char *input);
int		verif_r_rotate_input(char *input);
void	swap(t_stacks *stacks, char *input);
void	push(t_stacks *stacks, char *input);
void	rotate(t_stacks *stacks, char *input);
void	r_rotate(t_stacks *stacks, char *input);

#endif
