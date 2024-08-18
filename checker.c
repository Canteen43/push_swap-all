/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 15:04:05 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (fill_stack(argc, argv, &head_a) == -1)
	{
		if (strsame(get_next_line(2), "Error\n") && get_next_line(2) == NULL)
			if (get_next_line(1) == NULL)
				return (success(head_a, head_b));
		return (failure(head_a, head_b));
	}
	if (get_ops(&head_a, &head_b) == -1)
		return (failure(head_a, head_b));
	if (head_b != NULL)
		return (failure(head_a, head_b));
	if (!lst_sorted(head_a))
		return (failure(head_a, head_b));
	return (success(head_a, head_b));
}

int	success(t_list *head_a, t_list *head_b)
{
	lst_free_all(head_a);
	lst_free_all(head_b);
	write(1, "OK", 2);
	return (0);
}

int	failure(t_list *head_a, t_list *head_b)
{
	lst_free_all(head_a);
	lst_free_all(head_b);
	write(1, "KO", 2);
	return (1);
}
