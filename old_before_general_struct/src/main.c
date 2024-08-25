/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:18:57 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/24 11:28:47 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	error(t_list *head_a, t_list *head_b);

int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;
	t_var	var;

	var.head_a = NULL;
	var.head_b = NULL;
	if (fill_stack(argc, argv, &head_a) == -1)
		return (error(head_a, head_b));
	bubble_sort(&head_a);
	lst_free_all(head_a);
	lst_free_all(head_b);
	return (0);
}

static int	error(t_list *head_a, t_list *head_b)
{
	lst_free_all(head_a);
	lst_free_all(head_b);
	write(2, "Error\n", 6);
	return (1);
}
