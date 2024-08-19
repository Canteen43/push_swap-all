/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streqfr2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:32:29 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 10:37:58 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	streqfr2(char *str, char *str2)
{
	int		rt;

	rt = strsame(str, str2);
	if (str2 != NULL)
		free(str2);
	return (rt);
}
