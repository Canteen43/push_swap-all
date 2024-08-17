/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/17 17:59:48 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;
	int		i;
	int		value;

	head_a = NULL;
	head_b = NULL;
	i = 1;
	if (fill_stack(argc, argv, head_a) == -1)
	{
		if (get_next_line(stdin) == Error && get_next_line(stdin) == nothing)
			return OK;
		else
			return KO;
	}
	while (get_next_line(stdin) == something)
		if (something == valid instruction)
			execute intruction;
		else
			return KO;
	if (Stack B is not empty)
		return KO;
	if (Stack A is not sorted)
		return KO;
	return OK;
}

int	fill_stack(int argc, char *argv[], t_list *head_a)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (set_int(argv[i], &value) == -1)
			return (-1);
		lst_new_to_back(head_a, value);
		i++;
	}
	return (0);
}

int	strtoint(char *str)
{
	int	value;
	int	factor;

	value = 0;
	factor = 1;
	if (*str == '-')
	{
		factor = -1;
		str++;
	}
	while (*str)
	{
		if (char_in_str(*str, "0123456789") == 0)
			error();
		if (lmt_check(value, *str) == -1)
			error();
		value = value * 10 + factor * (*str - '0');
		str++;
	}
	return (value);
}
