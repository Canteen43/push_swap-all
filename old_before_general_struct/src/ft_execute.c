/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:06:54 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	both(t_list **head1, t_list **head2, void (*func)(t_list **))
{
	func(head1);
	func(head2);
}

int	execute(t_list **pheada, t_list **pheadb, char *str)
{
	if (streq(str, "pa\n"))
		push(pheada, pheadb);
	else if (streq(str, "pb\n"))
		push(pheadb, pheada);
	else if (streq(str, "sa\n"))
		swap(pheada);
	else if (streq(str, "sb\n"))
		swap(pheadb);
	else if (streq(str, "ss\n"))
		both(pheada, pheadb, swap);
	else if (streq(str, "ra\n"))
		rotate(pheada);
	else if (streq(str, "rb\n"))
		rotate(pheadb);
	else if (streq(str, "rr\n"))
		both(pheada, pheadb, rotate);
	else if (streq(str, "rra\n"))
		revrot(pheada);
	else if (streq(str, "rrb\n"))
		revrot(pheadb);
	else if (streq(str, "rrr\n"))
		both(pheada, pheadb, revrot);
	else
		return (-1);
	return (0);
}
