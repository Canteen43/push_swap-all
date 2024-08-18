/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:40:29 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 14:44:36 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	handle_stack(int argc, char *argv[], t_list **pheada, t_list **pheadb)
{
	char	*str;

	if (fill_stack(argc, argv, pheada) == -1)
	{
		str = get_next_line(2);
		if (str == NULL)
			return (-1);
		if (!strsame(str, "Error\n"))
		{
			free(str);
			return (-1);
		}
		free(str);
		str = get_next_line(2);
		if (str != NULL)
		{
			free(str);
			return (-1);
		}
		str = get_next_line(1);
		if (str != NULL)
		{
			free(str);
			return (-1);
		}
	}
	return (0);
}

int	equal_next_line(int fd, char *str)
{
	char	*str2;
	int		i;

	str2 = get_next_line(fd);
	if (str2 == NULL)
	{
		if (str == NULL)
			return (1);
		return (0);
	}
	if (str == NULL)
	{
		free(str2);
		return (0);
	}
	while (*(str + i))
	{
		if (*(str + i) != *(str2 + i))
		{
			free(str2);
			return (0);
		}
		i++;
	}

	
	
}

int	equal_next_line(int fd, char *str)
{
	char	*str2;
	int		rt;

	rt = 1;
	str2 = get_next_line(fd);
	if (str2 == NULL)
		if (str != NULL)
			rt = 0;
	else if (str == NULL)
		rt = 0;
	else

	
	
}