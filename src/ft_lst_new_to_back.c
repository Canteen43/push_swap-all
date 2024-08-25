/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_to_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:38:19 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

/*This function should take the head of a list and add a new node with value
 value to its end. If the list is empty it should make the new node the head.*/
int	lst_new_to_back(t_list **phead, int value)
{
	t_list	*new;

	new = lst_new(value);
	if (new == NULL)
		return (-1);
	if (*phead == NULL)
	{
		*phead = new;
		return (0);
	}
	lst_last(*phead)->next = new;
	return (0);
}
