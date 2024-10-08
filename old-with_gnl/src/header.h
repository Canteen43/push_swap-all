/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:25:59 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/28 14:00:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <limits.h>	//INT_MAX, INT_MIN
# include <unistd.h>	//write()
# include <stdlib.h>	//free(), malloc()
# include <stdbool.h>	//true, false
# include <stdarg.h>	//va_start(), va_arg(), va_end()

typedef struct s_moves
{
	int				ra;
	int				rra;
	int				rb;
	int				rrb;
	int				rr;
	int				rrr;
}					t_mov;

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

typedef struct s_var
{
	bool	used_split;
	int		max;
	int		min;
	int		i;
	int		value;
	int		argn;
	char	**argp;
	t_list	*head_a;
	t_list	*head_b;
}	t_var;

/*Function prototypes*/
t_list	*lst_last(t_list *node);
t_list	*lst_new(int value);
t_list	*lst_prelast(t_list *node);
int		lst_new_to_back(t_list **phead, int value);
void	lst_free_all(t_list *node);
int		lst_incl_val(t_list *node, int value);
int		lst_min(t_list *node);
int		lst_max(t_list *node);
int		lst_len(t_list *node);
int		lst_bsni(int nbr, t_list *node);
int		lst_ival(t_list *head, int ind);
int		lst_vali(t_list *head, int val);
void	push(t_list **phead1, t_list **phead2);
void	revrot(t_list **phead);
void	rotate(t_list **phead);
void	swap(t_list **phead);
int		last_incl_val(t_list *node, int value);
bool	lst_sorted(t_list *node);
int		set_int(char *str, int *p_value);
int		execute(t_list **pheada, t_list **pheadb, char *str);
int		get_ops(t_list **head_a, t_list **head_b);
int		fill_stack(t_var *var, int argc, char *argv[]);
int		streqfr2(char *str, char *str2);
char	*get_next_line(int fd);
int		streq(char *str1, char *str2);
int		char_in_str(char c, char *s);
int		chars_in_str(char *cs, char *s);
int		lmt_check(int value, char next);
void	ft_putstr_fd(char *s, int fd);
void	simpsort(t_var *var);
void	sort(t_var *var);
int		reqmov(int len_a, int ind_a, int len_b, int ind_b);
void	setmov(t_mov *mov, t_var *var, int ia, int ib);
void	exmov(t_var *var, t_mov *mov);
int		min(int nbr, ...);
int		max(int nbr, ...);
int		imin(int nbr, ...);
void	rot_a(t_var *var);
void	rot_b(t_var *var);
void	iex(t_var *var, int ia);
void	pushback(t_var *var);
int		cheapest(t_var *var);
void	quicksort(t_var *var);

#endif	// HEADER_H