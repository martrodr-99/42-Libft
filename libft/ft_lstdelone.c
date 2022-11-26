/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:19:10 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:42:52 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTDELONE

- takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node

- the memory of ’next’ must not be freed

lst:  the node to free

del:  the address of the function used to delete
the content

---------------------------------------------------------------
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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

	ft_lstdelone(head, del);

	printf("\n       %s            %s           %s\n", (char *)head->content,
	(char *)head->next->content, (char *)head->next->next->content);
	printf("%p %p %p %p\n\n", head, head->next, head->next->next,
	head->next->next->next);
} */