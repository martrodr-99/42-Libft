/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:46:52 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:46:20 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
LSTNEW

- allocates memory and returns a new node

- the member variable ’content’ is initialized with
the value of the parameter ’content’

- the variable ’next’ is initialized to NULL

---------------------------------------------------------------
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int main(void)
{
	char	str[] = "ola";
	t_list	*head;
	
	head = ft_lstnew((void *)str);
	printf("%s\n", ((char *)head->content));
} */