/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prelast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:54:23 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 11:28:28 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*lst_prelast(t_list *node)
{
	t_list	*last;

	last = lst_last(node);
	if (last == NULL)
		return (NULL);
	while (node->next != last)
		node = node->next;
	return (node);
}
