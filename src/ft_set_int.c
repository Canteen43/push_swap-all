/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:12:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/01 16:07:58 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	set_int(char *str, int *p_value)
{
	int	factor;

	*p_value = 0;
	factor = 1;
	if (*str == '-')
	{
		if (*(str + 1) == '\0')
			return (-1);
		factor = -1;
		str++;
	}
	while (*str)
	{
		if (char_in_str(*str, "0123456789") == 0)
			return (-1);
		if (lmt_check(*p_value, *str) == -1)
			return (-1);
		*p_value = *p_value * 10 + factor * (*str - '0');
		str++;
	}
	return (0);
}
