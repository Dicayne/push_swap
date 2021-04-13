/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:52:11 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/13 01:52:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header/push_swap.h"

void	store_val(t_list **a, char **av)
{
	int i;
	int *num;

	i = 0;
	num = (int *)malloc(sizeof(int));
	*a = NULL;
	while (av[i])
	{
		*num = ft_atoi(av[i]);
		ft_lstadd_back(a, ft_lstnew(num));
		i++;
	}
}