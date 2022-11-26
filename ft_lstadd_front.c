/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:02:44 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:42:05 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTADD_FRONT

- adds the new node at the beginning of the list

lst:  address of a pointer to the first link of
a list

new:  address of a pointer to the node to be
added to the list

---------------------------------------------------------------
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int		main(void)
{
	t_list *head;
	if(!(head = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"ola";
	head->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;

	new->content = (char *)"adeus";
	new->next = NULL;

	printf("Head -> %s\n", (char *)head->content);

	ft_lstadd_front(&head, new);

	printf("Head -> %s\n", (char *)head->content);
} */