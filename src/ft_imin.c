/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:05:42 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 14:30:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	imin(int nbr, ...)
{
	va_list	args;
	int		min;
	int		tmp;
	int		i;
	int		ind;

	va_start(args, nbr);
	min = va_arg(args, int);
	i = 2;
	while (i <= nbr)
	{
		tmp = va_arg(args, int);
		if (tmp < min)
		{
			min = tmp;
			ind = i;
		}
		i++;
	}
	va_end(args);
	return (ind);
}
