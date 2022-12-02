/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:19:43 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:54:47 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
LSTMAP

- iterates the list ’lst’ and applies the function
’f’ on the content of each node

- creates a new list resulting of the successive
applications of the function ’f’

- the ’del’ function is used to delete the content
of a node if needed

lst:  the address of a pointer to a node
f:    the address of the function used to iterate on
      the list
del:  the address of the function used to delete
      the content of a node if needed

---------------------------------------------------------------
HOW IT WORKS

- takes the node (of a list) 'lst' passed in the parameter and
applies to each node the function f (also passed in the parameter)
and creates and returns a new list

- this results in successive applications of the function
recursively until the end of the list is reached and the newlist
is returned

- We set it into newlist the function lstnew that it will create a new node (allocates memory). 
Then we set our newlist element next equal to the ft_lstmap function which has been passed lst's
element next (the node following it) as well as the function f. This allows us to recursively
apply the function f to all of the nodes and allows us to allocate memory based on how many
indiviual nodes we have in our list. Once lst->next becomes equal to NULL this will break us
out of the recursion and have us return the newlist.
---------------------------------------------------------------
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (lst && f)
	{
		newlist = ft_lstnew(f(lst->content));
		if (newlist && lst->next)
			newlist->next = ft_lstmap(lst->next, f, del);
		return (newlist);
	}
	return (NULL);
}
