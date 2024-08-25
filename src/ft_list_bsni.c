/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_bsni.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:36:21 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 21:36:21 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns index of biggest smaller numbers.*/
int lst_bsni(int nbr, t_list *node)
{
    int bsn;
    int ind;
    int cur;
    int i;

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
}

static void set_bsn(int *p_bsn, int *p_ind, int cur, int i)
{
    *bsn = cur;
    *ind = i;
}
