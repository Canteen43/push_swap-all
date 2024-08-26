/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ipush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:24:15 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 11:30:36 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_ipush(t_var *var, int ind)
{
	t_list	*node;
	int		i;

	node = var->head_a;
	i = 0;
	while (i < ind)
	{
		node = node->next;
		i++;
	}
	if (node->value < var->pivot)
	{
		ft_pb(var);
		ft_putstr("pb\n");
	}
	else
	{
		ft_ra(var);
		ft_putstr("ra\n");
	}
}