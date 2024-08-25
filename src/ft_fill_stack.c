/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:30:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 13:28:02 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int			set_arr(t_var *var, int argc, char *argv[]);
static int	nbr_split_items(char	**ptr);
static int	rtn_free_split(int rtn, t_var *var);
char		**ft_split(char const *s, char c);
static void	free_split(char **ptr);

int	fill_stack(t_var *var, int argc, char *argv[])
{
	int	i;

	if (set_arr(var, argc, argv) == -1)
		return (-1);
	i = 0;
	while (i < var->argn)
	{
		if (set_int(var->argp[i], &var->value) == -1)
			return (rtn_free_split(-1, var));
		if (lst_incl_val((var->head_a), var->value) == 1)
			return (rtn_free_split(-1, var));
		if (lst_new_to_back(&(var->head_a), var->value) == -1)
			return (rtn_free_split(-1, var));
		i++;
	}
	return (rtn_free_split(0, var));
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

static int	rtn_free_split(int rtn, t_var *var)
{
	if (var->used_split == true)
	{
		free_split(var->argp);
	}
	return (rtn);
}

void	free_split(char **ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return ;
	while (*(ptr + i) != NULL)
	{
		free(*ptr + i);
		i++;
	}
	free(ptr);
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
