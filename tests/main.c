/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:59:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 11:36:48 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	*str;
	char	**split;
	int		reps;

	str = "";
	split = ft_split(str, ' ');
	while (*split != NULL)
	{
		printf("Split #%d: |%s|\n", reps, *split);
		split++;
	}
}
