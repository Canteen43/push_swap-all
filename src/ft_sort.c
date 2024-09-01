/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:53:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 13:59:33 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort(t_var *var)
{
	if (lst_sorted(var->head_a))
		return ;
	if (lst_len(var->head_a) <= 5)
	{
		quicksort(var);
		return ;
	}
	push(&var->head_b, &var->head_a);
	ft_putstr_fd("pb\n", 1);
	while (var->head_a)
		iex(var, cheapest(var));
	rot_b(var);
	pushback(var);
}
