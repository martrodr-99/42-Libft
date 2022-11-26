/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:19:00 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:41:24 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTADD_BBACK

- adds the node ’new’ at the end of the list

lst:  the address of a pointer to the first link of
a list
new:  the address of a pointer to the node to be
added to the list

---------------------------------------------------------------
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			tail = ft_lstlast(*lst);
			tail->next = new;
		}
	}
}

/* int		main(void)
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *new;

	if (!(head = malloc(sizeof(t_list))))
		return 0;  // Estes aqui são 0 porque estás no MAIN e é um -> Int <-. Logo é 0.

	if (!(dois = malloc(sizeof(t_list))))
		return 0;

	if (!(tres = malloc(sizeof(t_list))))
		return 0;

	if (!(new = malloc(sizeof(t_list))))
		return 0;

	head->content = "Um";
	head->next = dois;

	dois->content = "Dois";
	dois->next = tres;

	tres->content = "Tres";
	tres->next = NULL;

	new->content = "New";
	new->next = NULL;

	printf("Tail -> %s\n", (char *)head->next->next->content);
	
	ft_lstadd_back(&head, new);

	printf("Tail -> %s\n", (char *)head->next->next->next->content);
} */