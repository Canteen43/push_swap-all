/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:39:14 by kweihman          #+#    #+#             */
/*   Updated: 2024/05/28 14:42:41 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/
/*Gives memory leak error for francinette --strict. However, I think this
function is not supposed to handle memory leaks. If anything, the del function
should handle setting stuff to zero.*/
/*Fails strict francinette because of memory leak. However, I think memory
leak has to occur because freeing of memory is to be handled by the
del-function.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	void	*temp2;

	head = NULL;
	while (lst)
	{
		temp2 = f(lst->content);
		temp = ft_lstnew(temp2);
		if (!temp)
		{
			ft_lstclear(&head, del);
			del(temp2);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
