/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simpsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:44:18 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 13:11:36 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	simpsort(t_var *var)
{
	int	first;
	int	second;

	var->min = lst_min(var->head_a);
	var->max = lst_max(var->head_a);
	while (!lst_sorted(var->head_a))
	{
		first = var->head_a->value;
		second = var->head_a->next->value;
		if (first > second && !(first == var->max && second == var->min))
		{
			swap(&var->head_a);
			ft_putstr_fd("sa\n", 1);
		}
		else
		{
			rotate(&var->head_a);
			ft_putstr_fd("ra\n", 1);
		}
	}
}
