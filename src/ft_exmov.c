/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exmov.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:31:51 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 10:17:02 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	exmov1(t_var *var, t_mov *mov);
static void	exmov2(t_var *var, t_mov *mov);

void	exmov(t_var *var, t_mov *mov)
{
	exmov1(var, mov);
	exmov2(var, mov);
}

static void	exmov1(t_var *var, t_mov *mov)
{
	while (mov->ra > 0)
	{
		rotate(&var->head_a);
		ft_putstr_fd("ra\n", 1);
		mov->ra--;
	}
	while (mov->rb > 0)
	{
		rotate(&var->head_b);
		ft_putstr_fd("rb\n", 1);
		mov->rb--;
	}
	while (mov->rr > 0)
	{
		rotate(&var->head_a);
		rotate(&var->head_b);
		ft_putstr_fd("rr\n", 1);
		mov->rr--;
	}
}

static void	exmov2(t_var *var, t_mov *mov)
{
	while (mov->rra > 0)
	{
		revrot(&var->head_a);
		ft_putstr_fd("rra\n", 1);
		mov->rra--;
	}
	while (mov->rrb > 0)
	{
		revrot(&var->head_b);
		ft_putstr_fd("rrb\n", 1);
		mov->rrb--;
	}
	while (mov->rrr > 0)
	{
		revrot(&var->head_a);
		revrot(&var->head_b);
		ft_putstr_fd("rrr\n", 1);
		mov->rrr--;
	}
}
