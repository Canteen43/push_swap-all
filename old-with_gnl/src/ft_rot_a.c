/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:17:34 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 13:57:19 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	rot_a(t_var *var)
{
	int	imin;
	int	len;

	imin = lst_vali(var->head_a, lst_min(var->head_a));
	len = lst_len(var->head_a);
	if (imin <= len / 2)
	{
		while (imin-- > 0)
		{
			rotate(&var->head_a);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (imin++ < len)
		{
			revrot(&var->head_a);
			ft_putstr_fd("rra\n", 1);
		}
	}
}
