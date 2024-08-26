/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:00:55 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 11:19:33 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_cheap(t_var *var)
{
	int		mov_nbr;
	int		ind;
	int		i;
	int		req;
	t_list	*node;

	mov_nbr = INT_MAX;
	ind = 0;
	i = 0;
	node = var->head_a;
	while (node)
	{
		req = reqmov(lst_len(var->head_a), i, lst_len(var->head_b), \
		list_bsni(node->value, var->head_b));
		if (req <= 1)
			return (i);
		if (req < mov_nbr)
		{
			mov_nbr = req;
			ind = i;
		}
		node = node->next;
		i++;
	}
	return (ind);
}
