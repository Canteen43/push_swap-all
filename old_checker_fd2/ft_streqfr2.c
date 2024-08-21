/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streqfr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:32:29 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 11:35:40 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	streqfr2(char *str, char *str2)
{
	int		rt;

	rt = streq(str, str2);
	if (str2 != NULL)
		free(str2);
	return (rt);
}
