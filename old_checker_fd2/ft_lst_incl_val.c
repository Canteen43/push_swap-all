/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_incl_val.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:54:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	last_incl_val(t_list *node, int value)
{
	while (node != NULL)
	{
		if (node->value == value)
			return (1);
		node = node->next;
	}
	return (0);
}
