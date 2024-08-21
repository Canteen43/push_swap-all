/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:30:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/19 11:28:28 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
