/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:18:49 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:44:02 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
LSTLAST

- returns the last node of the list

lst:  The beginning of the list

---------------------------------------------------------------
*/
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
			break ;
		lst = lst->next;
	}
	return (lst);
}

/* int		main(void)
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;
	t_list *last;
	
	head = ft_lstnew("UM");
	dois = ft_lstnew("DOIS");
	tres = ft_lstnew("TRES");
	quatro = ft_lstnew("QUATRO");

	head->next = dois;
	dois->next = tres;
	tres->next = quatro;
	quatro->next = NULL;

	//qual o ultimo nó sem aplicar a função
	printf("last sem função: %s\n", (char *)quatro->next);
	
	//qual o ultimo nó aplicando a função
	last = ft_lstlast(head);

	printf("last após função: %s\n", (char *)last->next);
} */