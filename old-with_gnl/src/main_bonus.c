/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/01 19:26:46 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	frtn(t_var	*var, int code);

/*This program does not strictly fulfill the subject requirements. The subject
 wants Error as a return for Error arguments whereas my program even checks
 if pushswap returns error for error arguements.*/
int	main(int argc, char *argv[])
{
	t_var	var;

	var.head_a = NULL;
	var.head_b = NULL;
	var.argn = argc;
	var.argp = argv;
	if (fill_stack(&var, argc, argv) == -1)
		return (frtn(&var, -1));
	if (get_ops(&var.head_a, &var.head_b) == -1)
		return (frtn(&var, -1));
	if (var.head_b != NULL)
		return (frtn(&var, 1));
	if (!lst_sorted(var.head_a))
		return (frtn(&var, 1));
	return (frtn(&var, 0));
}

static int	frtn(t_var	*var, int code)
{
	lst_free_all(var->head_a);
	lst_free_all(var->head_b);
	if (code == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (code == 0)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	if (code == 1)
	{
		write(1, "KO\n", 3);
		return (0);
	}
	else
	{
		write(2, "Unexpected Error\n", 17);
		return (-1);
	}
}
