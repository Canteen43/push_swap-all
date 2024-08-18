/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:51:20 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 12:11:08 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;
	char	*str;

	head_a = NULL;
	head_b = NULL;
	if (fill_stack(argc, argv, &head_a) == -1)
	{
		if (get_next_line(2) == "Error\n" && get_next_line(2) == NULL)
			if (get_next_line(1) == NULL)
				return (success());
		return (failure());
	}
	while (1)
	{
		str = get_next_line(0);
	}
	if (head_b != NULL)
		return (failure());
	if (!lst_sorted(head_a))
		return (failure());
	return (success());
}

int	success(void)
{
	write(1, "OK", 2);
	return (0);
}

int	failure(void)
{
	write(1, "KO", 2);
	return (1);
}

int	fill_stack(int argc, char *argv[], t_list **phead)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (set_int(argv[i], &value) == -1)
			return (-1);
		if (last_incl_val(*phead, value) == 1)
			return (-1);
		if (lst_new_to_back(phead, value) == -1)
			return (-1);
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
