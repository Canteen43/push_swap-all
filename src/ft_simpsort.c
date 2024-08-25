/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simpsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:44:18 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 12:02:16 by kweihman         ###   ########.fr       */
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
		if (first > second && !(first == var->min && second == var->max))
			swap(var->head_a);
		else
			rotate(var->head_a);
	}
}
