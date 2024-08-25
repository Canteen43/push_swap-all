/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:30:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 12:20:35 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	set_arr(t_var *var, int argc, char *argv[]);
static int	nbr_split_items(char	**ptr);
static int	rtn_free_split(int rtn, bool used_split, char **arg_ptr);
char		**ft_split(char const *s, char c);

int	fill_stack(t_var *var, int argc, char *argv[])
{
	int		i;
	int		value;

	if (set_arr(var, argc, argv) == -1)
		return (-1);
	i = 0;
	while (i < arg_nbr)
	{
		if (set_int(arg_ptr[i], &value) == -1)
			return (rtn_free_split(-1, used_split, arg_ptr));
		if (lst_incl_val(*phead, value) == 1)
			return (rtn_free_split(-1, used_split, arg_ptr));
		if (lst_new_to_back(phead, value) == -1)
			return (rtn_free_split(-1, used_split, arg_ptr));
		i++;
	}
	return (rtn_free_split(0, used_split, arg_ptr));
}

/*I have not considered the case that ft_split might fail.*/
int	set_arr(t_var *var, int argc, char *argv[])
{
	if (argc == 2)
	{
		var->argp = ft_split(argv[1], ' ');
		if (var->argp == NULL)
			return (-1);
		var->argn = nbr_split_items(var->argp);
		var->used_split = true;
	}
	else
	{
		var->argp = argv;
		(var->argp)++;
		var->argn = argc - 1;
		var->used_split = false;
	}
	return (0);
}

static int	rtn_free_split(int rtn, bool used_split, char **arg_ptr)
{
	if (used_split == true)
	{
		free(arg_ptr);
		return (rtn);
	}
	return (rtn);
}

static int	nbr_split_items(char	**ptr)
{
	int	i;

	i = 0;
	while (*ptr != NULL)
	{
		i++;
		ptr++;
	}
	return (i);
}
