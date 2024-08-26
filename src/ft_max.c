/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:26:15 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	max(int nbr, ...)
{
	va_list	args;
	int		max;
	int		tmp;

	va_start(args, nbr);
	max = va_arg(args, int);
	while (--nbr)
	{
		tmp = va_arg(args, int);
		if (tmp > max)
			max = tmp;
	}
	va_end(args);
	return (max);
}
