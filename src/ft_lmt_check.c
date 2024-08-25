/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lmt_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:47:40 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	lmt_check(int value, char next)
{
	if (value > 0)
	{
		if (INT_MAX / value < 10)
			return (-1);
		if (INT_MAX / value > 10)
			return (0);
		if (INT_MAX / value == 10)
			if (INT_MAX % value < next - '0')
				return (-1);
	}
	if (value < 0)
	{
		if (INT_MIN / value < 10)
			return (-1);
		if (INT_MIN / value > 10)
			return (0);
		if (INT_MIN / value == 10)
			if (INT_MIN % value > next - '0')
				return (-1);
	}
	return (0);
}
