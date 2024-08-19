/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:06:54 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 11:43:07 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	execute(t_list **pheada, t_list **pheadb, char *str)
{
	if (strsame(str, "pa"))
		push(pheada, pheadb);
	else if (strsame(str, "pb"))
		push(pheadb, pheada);
	else if (strsame(str, "sa"))
		swap(pheada);
	else if (strsame(str, "sb"))
		swap(pheadb);
	else if (strsame(str, "ss"))
		both(pheada, pheadb, swap);
	else if (strsame(str, "ra"))
		rotate(pheada);
	else if (strsame(str, "rb"))
		rotate(pheadb);
	else if (strsame(str, "rr"))
		both(pheada, pheadb, rotate);
	else if (strsame(str, "rra"))
		revrot(pheada);
	else if (strsame(str, "rrb"))
		revrot(pheadb);
	else if (strsame(str, "rrr"))
		both(pheada, pheadb, revrot);
	else
		return (-1);
	return (0);
}

void	both(t_list **head1, t_list **head2, void (*func)(t_list **))
{
	func(head1);
	func(head2);
}
