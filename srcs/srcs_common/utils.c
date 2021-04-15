/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:12:21 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/14 16:27:01 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_list *a)
{
	int *i;
	int *j;

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
			printf("%d    ", *i);
			a = a->next;
		}
		else
			printf("     ");
		if (b)
		{
			i = (int *)b->content;
			printf("%d\n", *i);
			b = b->next;
		}
		else
			printf(" \n");
	}
	printf("a    b\n");
}
