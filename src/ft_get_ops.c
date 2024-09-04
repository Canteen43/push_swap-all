/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:00:27 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/04 13:34:55 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	free_split(char **ptr);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_bzero(void *s, size_t n);

static char	*readstdin(void)
{
	char	*str;
	char	buf[BUFFER_SIZE];
	int		read_rt;

	str = "\0";
	while (1)
	{
		ft_bzero(buf, BUFFER_SIZE);
		read_rt = read(STDIN_FILENO, buf, BUFFER_SIZE - 1);
		if (read_rt == -1)
			return (NULL);
		if (read_rt == 0)
			break ;
		str = ft_strjoin(str, buf);
		if (str == NULL)
			return (NULL);
	}
	return (str);
}

int	get_ops(t_list **head_a, t_list **head_b)
{
	char	*str;
	char	**ops;
	int		i;

	str = readstdin();
	if (str == NULL)
		return (-1);
	ops = ft_split(str, '\n');
	free(str);
	if (ops == NULL)
		return (-1);
	i = 0;
	while (ops[i] != NULL)
	{
		if (execute(head_a, head_b, ops[i]) == -1)
		{
			free_split(ops);
			return (-1);
		}
		i++;
	}
	free_split(ops);
	return (0);
}

static void	free_split(char **ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return ;
	while (*(ptr + i) != NULL)
	{
		free(*(ptr + i));
		i++;
	}
	free(ptr);
}
