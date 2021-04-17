/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:12:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/17 16:15:51 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_pos_val(t_list *a, int size, int val)
{
	int	nb;

	nb = 0;
	while (a)
	{
		if (*(int *)a->content > val)
			nb++;
		a = a->next;
	}
	return (size - nb);
}

int		is_sorted(t_list *a)
{
	int *i;
	int *j;

	if (a)
	{
		while (a->next)
		{
			i = a->content;
			j = a->next->content;
			if (*i > *j)
				return (-1);
			a = a->next;
		}
		return (0);
	}
	return (-1);
}

void	display(t_list *a)
{
	int *i;

	while (a)
	{
		i = (int *)a->content;
		printf("%d\n", *i);
		a = a->next;
	}
	printf("\n");
}

void	display_lst(t_list *a, t_list *b)
{
	int *i;

	while (a || b)
	{
		if (a)
		{
			i = (int *)a->content;
			printf("%d\t", *i);
			a = a->next;
		}
		else
			printf("\t");
		if (b)
		{
			i = (int *)b->content;
			printf("%d\n", *i);
			b = b->next;
		}
		else
			printf(" \n");
	}
	printf("⬆️\t⬆️\na\tb\n\n");
}
