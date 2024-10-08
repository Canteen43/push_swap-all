/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:40:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

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
