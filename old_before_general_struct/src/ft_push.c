/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:48:10 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

/*Take the first element at the top of 2 and put it at the top of 1.*/
void	push(t_list **phead1, t_list **phead2)
{
	t_list	*tmp;

	if (*phead2 == NULL)
		return ;
	tmp = *phead2;
	*phead2 = (*phead2)->next;
	tmp->next = *phead1;
	*phead1 = tmp;
}
