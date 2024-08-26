/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_ival.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:42:24 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	lst_ival(t_list *head, int ind)
{
	t_list	*node;
	int		i;

	node = head;
	i = 0;
	while (i < ind)
	{
		node = node->next;
		i++;
	}
	return (node->value);
}
