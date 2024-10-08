/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:06:54 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/04 13:30:14 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	both(t_list **head1, t_list **head2, void (*func)(t_list **))
{
	func(head1);
	func(head2);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	execute(t_list **pheada, t_list **pheadb, char *str)
{
	if (streq(str, "pa"))
		push(pheada, pheadb);
	else if (streq(str, "pb"))
		push(pheadb, pheada);
	else if (streq(str, "sa"))
		swap(pheada);
	else if (streq(str, "sb"))
		swap(pheadb);
	else if (streq(str, "ss"))
		both(pheada, pheadb, swap);
	else if (streq(str, "ra"))
		rotate(pheada);
	else if (streq(str, "rb"))
		rotate(pheadb);
	else if (streq(str, "rr"))
		both(pheada, pheadb, rotate);
	else if (streq(str, "rra"))
		revrot(pheada);
	else if (streq(str, "rrb"))
		revrot(pheadb);
	else if (streq(str, "rrr"))
		both(pheada, pheadb, revrot);
	else
		return (-1);
	return (0);
}
