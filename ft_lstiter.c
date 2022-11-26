/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:19:35 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:43:27 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
LSTITER

- will be taking the function f, passed in the parameters, and
applying it on the content of each node in our linked list

lst:  the address of a pointer to a node

f:  the address of the function used to iterate on
the list

---------------------------------------------------------------
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

/*If it is not NULL we start our loop through our linked list applying
function f to each link. Once it has been applied we set the current
link to be it's element next, setting it to the following link and
then starting the loop over again until we reach the end by hitting
NULL.*/
