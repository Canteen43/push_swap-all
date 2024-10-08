/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:40:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	rotate(t_list **phead)
{
	t_list	*tmp;

	if (*phead == NULL)
		return ;
	if ((*phead)->next == NULL)
		return ;
	tmp = *phead;
	(*phead) = (*phead)->next;
	lst_last(*phead)->next = tmp;
	tmp->next = NULL;
}
