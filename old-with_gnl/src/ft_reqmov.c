/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reqmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:22:54 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	reqmov(int len_a, int ind_a, int len_b, int ind_b)
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;

	ra = ind_a;
	rra = len_a - ind_a;
	rb = ind_b;
	rrb = len_b - ind_b;
	return (min(4, (ra + rrb), max(2, ra, rb), (rra + rb), max(2, rra, rrb)));
}
