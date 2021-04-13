/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:16:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 12:01:11 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_lst(t_list *a)
{
	int *i;
	while (a)
	{
		i = (int *)a->content;
		printf("%d\n", *i);
		a = a->next;
	}
}

int main(int ac, char **av)
{
	t_list *a;

	if (ac != 1)
	{
		store_val(&a, ++av);
		display_lst(a);
	}
	return (0);
}