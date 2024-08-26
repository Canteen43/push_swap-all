/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:07:57 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/26 14:30:10 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	option1(t_mov *mov);
static void	option2(t_mov *mov);
static void	option3(t_mov *mov);
static void	option4(t_mov *mov);

void	setmov(t_mov *mov, t_var *var, int ia, int ib)
{
	int	option;

	mov->ra = ia;
	mov->rra = lst_len(var->head_a) - ia;
	mov->rb = ib;
	mov->rrb = lst_len(var->head_b) - ib;
	mov->rr = 0;
	mov->rrr = 0;
	option = imin(4, mov->ra + mov->rrb, max(mov->ra, mov->rb), \
	mov->rra + mov->rb, max(mov->rra, mov->rrb));
	if (option == 1)
		option1(mov);
	if (option == 2)
		option2(mov);
	if (option == 3)
		option3(mov);
	if (option == 4)
		option4(mov);
}

static void	option1(t_mov *mov)
{
	mov->rb = 0;
	mov->rra = 0;
}

static void	option2(t_mov *mov)
{
	if (mov->ra > mov->rb)
	{
		mov->rr = mov->rb;
		mov->ra = mov->ra - mov->rr;
		mov->rb = 0;
	}
	if (mov->ra < mov->rb)
	{
		mov->rr = mov->ra;
		mov->rb = mov->rb - mov->rr;
		mov->ra = 0;
	}
	mov->rra = 0;
	mov->rrb = 0;
}

static void	option3(t_mov *mov)
{
	mov->ra = 0;
	mov->rrb = 0;
}

static void	option2(t_mov *mov)
{
	if (mov->rra > mov->rrb)
	{
		mov->rr = mov->rrb;
		mov->rra = mov->rra - mov->rr;
		mov->rrb = 0;
	}
	if (mov->rra < mov->rrb)
	{
		mov->rr = mov->rra;
		mov->rrb = mov->rrb - mov->rr;
		mov->rra = 0;
	}
	mov->ra = 0;
	mov->rb = 0;
}
