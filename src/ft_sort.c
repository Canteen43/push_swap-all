/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:53:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort(t_var *var)
{
	t_list	*node;
	int		ia;

	if (is_sorted(var->head_a))
		return ;
	node = var->head_a;
	ia = 0;
	while (node)
	{
		iex(var, ia);
		node = node->next;
		ia++;
	}
	rotb(var);
	pushback(var);
}
