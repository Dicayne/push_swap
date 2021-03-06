/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:52:11 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/17 16:16:07 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_args(char **args)
{
	int i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	stock_pos_val(t_list **a, int size)
{
	t_list *tmp;

	tmp = *a;
	while (tmp)
	{
		tmp->pos = find_pos_val(*a, size, *(int *)tmp->content);
		tmp = tmp->next;
	}
}

char	**stock_av(char **av)
{
	char	**tmp;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (av[len])
		len++;
	if (!(tmp = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (av[i])
	{
		tmp[i] = ft_strdup(av[i]);
		i++;
	}
	tmp[i] = NULL;
	if (len > 1)
		return (tmp);
	else
	{
		free_args(tmp);
		tmp = ft_split(av[0], ' ');
		return (tmp);
	}
}
