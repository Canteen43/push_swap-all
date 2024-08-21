/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 12:43:14 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	success(t_list *head_a, t_list *head_b)
{
	lst_free_all(head_a);
	lst_free_all(head_b);
	write(1, "OK\n", 3);
	return (0);
}

static int	failure(t_list *head_a, t_list *head_b)
{
	lst_free_all(head_a);
	lst_free_all(head_b);
	write(1, "KO\n", 3);
	return (1);
}

/*This program does not strictly fulfill the subject requirements. The subject
 wants Error as a return for Error arguments whereas my program even checks
 if pushswap returns error for error arguements.*/
int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (fill_stack(argc, argv, &head_a) == -1)
	{
		if (streqfr2("Error\n", get_next_line(2)))
			if (streqfr2(get_next_line(2), NULL))
				if (streqfr2(get_next_line(0), NULL))
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
