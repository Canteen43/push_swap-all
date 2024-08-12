/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/12 11:51:45 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	int	*arr1;
	int *arr2;
	int	i;

	arr1 = malloc(sizeof(int) * (argc - 1));
	arr2 = malloc(sizeof(int) * (argc - 1));
	if (arr == NULL)
		error();
	i = 1;
	while (i < argc)
		add argv[i] to array;
	
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
