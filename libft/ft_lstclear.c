/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:19:24 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:42:30 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTCLEAR

- deletes and frees the given node and every
successor of that node, using the function ’del’
and free.

- finally, the pointer to the list must be set to
NULL

lst:  the address of a pointer to a node

del:  the address of the function used to delete
the content of the node

---------------------------------------------------------------
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst && del)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}

/* void	del(void *este)
{
	free (este);
}

int		main(void)
{
	t_list *head;
	t_list *dois;
	t_list *tres;

	char *c1 = ft_strdup("Um");
    char *c2 = ft_strdup("Dois");
    char *c3 = ft_strdup("Tres");

	head = ft_lstnew(c1);
	dois = ft_lstnew(c2);
	tres = ft_lstnew(c3);

	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);

	printf("\n       %s            %s           %s\n", (char *)head->content,
	(char *)head->next->content, (char *)head->next->next->content);

	printf("%p %p %p %p\n", head, head->next, head->next->next,
	head->next->next->next);

	ft_lstclear(&head, del);

	printf("\n       %s            %s           %s\n\n", (char *)head->content,
	(char *)head->next->content, (char *)head->next->next->content);

	printf("%p %p %p %p\n\n", head, head->next, head->next->next,
	head->next->next->next);
} */