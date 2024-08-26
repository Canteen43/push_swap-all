/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_bsni.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:36:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 16:15:39 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

/* Returns index of biggest smaller numbers. */
int	lst_bsni(int nbr, t_list *node)
{
	int	bsn;
	int	ind;
	int	cur;
	int	i;

	bsn = node->value;
	ind = 0;
	while (node != NULL)
	{
		cur = node->value;
		if (bsn > nbr && cur > bsn)
			set_bsn(&bsn, &ind, cur, i);
		if (bsn > nbr && cur < nbr)
			set_bsn(&bsn, &ind, cur, i);
		if (bsn < nbr && cur > bsn && cur < nbr)
			set_bsn(&bsn, &ind, cur, i);
		node = node->next;
		i++;
	}
	return (ind);
}

static void	set_bsn(int *p_bsn, int *p_ind, int cur, int i)
{
	*p_bsn = cur;
	*p_ind = i;
}
