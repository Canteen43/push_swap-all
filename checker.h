/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:25:59 by kweihman          #+#    #+#             */
/*   Updated: 2024/08/17 14:32:18 by kweihman         ###   ########.fr       */
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

#endif	// CHECKER_H