/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:53:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 11:27:58 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	sort(t_var *var)
{
	t_list	*node;

	if (lst_sorted(var->head_a))
		return ;
	push(&var->head_b, &var->head_a);
	ft_putstr_fd("pb\n", 1);
	node = var->head_a;
	while (var->head_a)
		iex(var, cheapest(var));
	rotb(var);
	pushback(var);
}
