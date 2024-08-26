/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:17:34 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	rotb(t_var *var)
{
	int	imax;
	int	len;

	imax = lst_vali(var->head_b, lst_max(var->head_b));
	len = lst_len(var->head_b);
	if (imax < len / 2)
	{
		while (imax-- > 0)
		{
			rotate(var->head_b);
			ft_putstr("rb\n");
		}
	}
	else
	{
		while (imax++ < len)
		{
			revrot(var->head_b);
			ft_putstr("rrb\n");
		}
	}
}
