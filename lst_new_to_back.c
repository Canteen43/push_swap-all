/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_to_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:38:19 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/17 18:04:20 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*lst_new_to_back(t_list *node, int value)
{
	t_list*	new;

	new = lst_new(value);
	if (new == NULL)
		return (NULL);
	(lst_last(node))->next = new;
}
