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

f:  the address of the function used to iterate on
the list

del:  the address of the function used to delete
the content of a node if needed

---------------------------------------------------------------
*/

/*This function takes the list of lst passed in the parameter and applies to
 * each link the function f (also passed in the parameter) and creates and 
 * returns a "fresh" list. This results in successive applications of the
 * function recursively until the end of the list is reached and the newlist
 * is returned.*/

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

/*We then make sure that both the list passed as well as the function f are 
not NULL. If they are we will return NULL. If not we will run the function
f on the link lst and set it into our newlist link variable. NOTE: We are
to assume that the function f allocates memory for our newlist variable
based on the data of lst. We then check if newlist is null as well as if
the link lst's element next is NULL. If neither are NULL we set our newlist
element next equal to the ft_lstmap function which has been passed lst's
element next (the link following it) as well as the function f. This allows
us to recursively apply the function f to all of the links and allows us to
allocate memory based on how many indiviual links we have in our list. Once
lst->next becomes equal to NULL this will break us out of the recursion and
have us return the newlist.*/
