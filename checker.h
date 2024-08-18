/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:25:59 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/18 13:31:18 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <limits.h>	//INT_MAX, INT_MIN
# include <unistd.h>	//write()

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

t_list	*lst_last(t_list *node);
int		lst_new_to_back(t_list **phead, int value);
t_list	*lst_new(int value);
t_list	*lst_prelast(t_list *node);
void	lst_free_all(t_list *node);
void	push(t_list **phead1, t_list **phead2);
void	revrot(t_list **phead);
void	rotate(t_list **phead);
void	swap(t_list **phead);
int		last_incl_val(t_list *node, int value);
int		lst_sorted(t_list *node);
int		set_int(char *str, int *p_value);
int		execute(t_list **pheada, t_list **pheadb, char *str);
int		get_ops(t_list **head_a, t_list **head_b);
int		fill_stack(int argc, char *argv[], t_list **phead);

#endif	// CHECKER_H