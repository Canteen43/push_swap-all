/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:30:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/23 14:43:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static bool	set_arr(int argc, char *argv[], int *p_arg_nbr, char ***p_arg_ptr);
static int	nbr_split_items(char	**ptr);
static int	rtn_free_split(int rtn, bool used_split, char **arg_ptr);
char		**ft_split(char const *s, char c);

int	fill_stack(int argc, char *argv[], t_list **phead)
{
	int		i;
	int		value;
	int		arg_nbr;
	char	**arg_ptr;
	bool	used_split;

	used_split = set_arr(argc, argv, &arg_nbr, &arg_ptr);
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
static bool	set_arr(int argc, char *argv[], int *p_arg_nbr, char ***p_arg_ptr)
{
	if (argc == 2)
	{
		*p_arg_ptr = ft_split(argv[1], ' ');
		*p_arg_nbr = nbr_split_items(*p_arg_ptr);
		return (true);
	}
	else
	{
		*p_arg_nbr = argc - 1;
		*p_arg_ptr = argv;
		(*p_arg_ptr)++;
		return (false);
	}
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
