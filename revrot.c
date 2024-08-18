/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:40:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 10:47:28 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	revrot(t_list **phead)
{
	t_list	*tmp;

	if (*phead == NULL)
		return ;
	if ((*phead)->next == NULL)
		return ;
	tmp = lst_last(*phead);
	lst_prelast(*phead)->next = NULL;
	tmp->next = (*phead);
	(*phead) = tmp;
}
