/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:25:59 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/25 12:14:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <limits.h>	//INT_MAX, INT_MIN
# include <unistd.h>	//write()
# include <stdlib.h>	//free(), malloc()
# include <stdbool.h>	//true, false

typedef struct s_var
{
	bool	used_split;
	int		max;
	int		min;
	int		i;
	int		argn;
	char	**argp;
	t_list	*head_a;
	t_list	*head_b;
}	t_var;

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
int		lst_incl_val(t_list *node, int value);
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
int		streqfr2(char *str, char *str2);
char	*get_next_line(int fd);
int		streq(char *str1, char *str2);
int		char_in_str(char c, char *s);
int		chars_in_str(char *cs, char *s);
int		lmt_check(int value, char next);
void	ft_putstr_fd(char *s, int fd);

#endif	// HEADER_H