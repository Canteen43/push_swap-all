/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:31:51 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 13:09:48 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	quick_sort(t_var *var)
{
	t_list	*node;
	int		ia;

	if (lst_len(var->head_a) == 2)
		quicksort2(var);
	if (lst_len(var->head_a) == 3)
		quicksort3(var);
	if (lst_len(var->head_a) == 4)
		quicksort4(var);
	if (lst_len(var->head_a) == 5)
		quicksort5(var);
}

static void	quicksort2(t_var *var)
{
	swap(&var->head_a);
}

static void	quicksort3(t_var *var)
{
	int	imin;
	int	imax;

	imin = lst_vali(var->head_a, lst_min(var->head_a));
	imax = lst_vali(var->head_a, lst_max(var->head_a));
	if (imin - imax != 1)
	{
		swap(&var->head_a);
		ft_putstr_fd("sa\n", 1);
	}
	imin = lst_vali(var->head_a, lst_max(var->head_a));
	if (imin == 1)
	{
		rot(&var->head_a);
		ft_putstr_fd("ra\n", 1);
	}
	if (imin == 2)
	{
		revrot(&var->head_a);
		ft_putstr_fd("rra\n", 1);
	}
}

static void	quicksort4(t_var *var)
{
	int	imin;

	imin = lst_vali(var->head_a, lst_min(var->head_a));
	if (imin == 3)
	{
		revrot(&var->head_a);
		ft_putstr_fd("rra\n", 1);
	}
	if (imin == 1 || imin ==2)
	{
		rotate(&var->head_a);
		ft_putstr_fd("ra\n", 1);
	}
	if (imin == 2)
	{
		rotate(&var->head_a);
		ft_putstr_fd("ra\n", 1);
	}
	push(&var->head_b, &var->head_a);
	ft_putstr_fd("pb\n", 1);
	quicksort3(var);
	push(&var->head_a, &var->head_b);
	ft_putstr_fd("pa\n", 1);
}

static void	quicksort5(t_var *var)
{
	int	imin;

	imin = lst_vali(var->head_a, lst_min(var->head_a));
	if (imin == 3)
	{
		revrot(&var->head_a);
		ft_putstr_fd("rra\n", 1);
	}
	if (imin == 1 || imin ==2)
	{
		rotate(&var->head_a);
		ft_putstr_fd("ra\n", 1);
	}
	if (imin == 2)
	{
		rotate(&var->head_a);
		ft_putstr_fd("ra\n", 1);
	}
	push(&var->head_b, &var->head_a);
	ft_putstr_fd("pb\n", 1);
	quicksort3(var);
	push(&var->head_a, &var->head_b);
	ft_putstr_fd("pa\n", 1);
}