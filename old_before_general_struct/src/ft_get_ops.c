/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:00:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	get_ops(t_list **head_a, t_list **head_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (str == NULL)
			return (0);
		if (execute(head_a, head_b, str) == -1)
		{
			free(str);
			return (-1);
		}
		free(str);
	}
	return (0);
}
