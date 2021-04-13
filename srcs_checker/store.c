/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:52:11 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 12:16:08 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	store_val(t_list **a, char **av)
{
	int i;
	int *num;

	i = 0;
	*a = NULL;
	while (av[i])
	{
		num = (int *)malloc(sizeof(int));
		*num = ft_atoi(av[i]);
		ft_lstadd_back(a, ft_lstnew(num));
		i++;
	}
}