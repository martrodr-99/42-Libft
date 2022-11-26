/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:16:49 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:46:35 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTSIZE

- counts the number of nodes in a list and returns
the length

lst:  the beginning of the list

---------------------------------------------------------------
*/
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int		main(void)
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	if (!(head = malloc(sizeof(t_list))))
		return 0;  // Estes aqui são 0 porque estás no MAIN e é um -> Int <-. Logo é 0.

	if (!(dois = malloc(sizeof(t_list))))
		return 0;

	if (!(tres = malloc(sizeof(t_list))))
		return 0;

	if (!(quatro = malloc(sizeof(t_list))))
		return 0;

	head->content = "Um";
	head->next = dois;

	dois->content = "Dois";
	dois->next = tres;

	tres->content = "Tres";
	tres->next = quatro;

	quatro->content = "Quatro";
	quatro->next = NULL;

	printf("%d\n", ft_lstsize(head));
} */