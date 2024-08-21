/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:13:42 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 11:28:28 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	lst_free_all(t_list *node)
{
	t_list	*tmp;

	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
