/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_bsni.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:36:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 10:23:56 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	set_bsn(int *p_bsn, int *p_ind, int cur, int i);

/* Returns index of biggest smaller number. */
int	lst_bsni(int nbr, t_list *node)
{
	int	bsn;
	int	ind;
	int	cur;
	int	i;

	bsn = node->value;
	ind = 0;
	i = 0;
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
