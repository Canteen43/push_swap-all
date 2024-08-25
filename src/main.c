/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:18:57 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 12:58:54 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	error(t_var	*var);

int	main(int argc, char *argv[])
{
	t_var	var;

	var.head_a = NULL;
	var.head_b = NULL;
	var.argn = argc;
	var.argp = argv;
	if (fill_stack(&var, argc, argv) == -1)
		return (error(&var));
	simpsort(&var);
	lst_free_all(var.head_a);
	lst_free_all(var.head_b);
	return (0);
}

static int	error(t_var	*var)
{
	lst_free_all(var->head_a);
	lst_free_all(var->head_b);
	write(2, "Error\n", 6);
	return (1);
}
