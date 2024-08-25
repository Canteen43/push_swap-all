/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:38:48 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	swap(t_list **phead)
{
	t_list	*tmp;

	if (*phead == NULL)
		return ;
	if ((*phead)->next == NULL)
		return ;
	tmp = (*phead)->next->next;
	(*phead)->next->next = *phead;
	(*phead) = (*phead)->next;
	(*phead)->next->next = tmp;
}
