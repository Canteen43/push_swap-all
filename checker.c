/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/12 14:02:47 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	Create Stack A;
	Create Stack B;
	Fill Stack A;
	if (Element in not integer of duplicate);
		if (instruction == Error\n)
			return OK;
		if (instruction != Error\n)
			return KO;
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

void error(void)
{
	free(something);
	write(2, "Error\n", 6);
	exit(1);
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
