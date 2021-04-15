/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_verif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:12:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 16:04:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		verif_swap_input(char *input)
{
	if (!ft_strcmp(input, "sa") || !ft_strcmp(input, "sb")
			|| !ft_strcmp(input, "ss"))
		return (1);
	else
		return (0);
}

int		verif_push_input(char *input)
{
	if (!ft_strcmp(input, "pa") || !ft_strcmp(input, "pb"))
		return (1);
	else
		return (0);
}

int		verif_rotate_input(char *input)
{
	if (!ft_strcmp(input, "ra") || !ft_strcmp(input, "rb")
			|| !ft_strcmp(input, "rr"))
		return (1);
	else
		return (0);
}

int		verif_r_rotate_input(char *input)
{
	if (!ft_strcmp(input, "rra") || !ft_strcmp(input, "rrb")
			|| !ft_strcmp(input, "rrr"))
		return (1);
	else
		return (0);
}
