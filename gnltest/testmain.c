/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:53:23 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/01 20:03:40 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>	//true, false
#include <stdio.h>		//printf
#include <string.h>		//strlen
#include "get_next_line.h"

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

	i = 0;
	tc = 0;
	str = "Hello\n";
	while (str)
	{
		tc += strlen(str);
		str_after = get_next_line(0);
		if (!endswnl(str))
		{
			printf("No newline, iteration %d, Total chars read %d\n", i, tc);
			printf("String before: %s|\n", str_before);
			printf("String: %s|\n", str);
			printf("String after: %s|\n--------------\n", str_after);
		}
		i++;
		str_before = str;
		str = str_after;
	}
}
