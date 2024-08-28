/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:40:44 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 10:32:38 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	iex(t_var *var, int ia)
{
	int		ib;
	t_mov	mov;

	ib = lst_bsni(lst_ival(var->head_a, ia), var->head_b);
	setmov(&mov, var, ia, ib);
	exmov(var, &mov);
	push(&var->head_b, &var->head_a);
	ft_putstr_fd("pb\n", 1);
}
