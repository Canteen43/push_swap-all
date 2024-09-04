/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pestmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:23:34 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/04 11:37:00 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>	//true, false
#include <stdio.h>		//printf
#include <string.h>		//strlen
#include "get_next_line_bonus.h"
#include <fcntl.h>   // for open
#include <string.h>  // for strlen

bool	endswnl(char *str)
{
	if (!str)
		return (false);
	while (*str)
	{
		str++;
	}
	str--;
	if (*str == '\n')
		return (true);
	return (false);
}

int	main(void)
{
	char	*str;
	char	*str_before;
	char	*str_after;
	int		i;
	int		tc;
	bool 	error;
	int		fd;
	int		fd2;

	fd = open("output", O_RDONLY);
	fd2 = open("comparison", O_WRONLY);
	if (fd < 0)
	{
		printf("Error opening file\n");
		return (1);
	}
	i = 0;
	tc = 0;
	str = "Hello\n";
	error = false;
	while (str)
	{
		tc += strlen(str);
		str_after = get_next_line(fd);
		if (!endswnl(str))
		{
			error = true;
			printf("No newline, iteration %d, Total chars read %d\n", i, tc);
			printf("String before: %s|\n", str_before);
			printf("String: %s|\n", str);
			printf("String after: %s|\n--------------\n", str_after);
		}
		else
		{
			write(fd2, str, strlen(str));
		}
		i++;
		str_before = str;
		str = str_after;
	}
	if (!error)
		printf("No errors found\n");
}