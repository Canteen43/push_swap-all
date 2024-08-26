/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:31:42 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 10:31:51 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	min(int nbr, ...)
{
	va_list	args;
	int		min;
	int		tmp;

	va_start(args, nbr);
	min = va_arg(args, int);
	while (--nbr)
	{
		tmp = va_arg(args, int);
		if (tmp < min)
			min = tmp;
	}
	va_end(args);
	return (min);
}
