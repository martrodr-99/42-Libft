/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:29 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:50:25 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRITERI

- striteri applies the parameter function f to each character
of a string, passing its index as first argument

- each character that is passed into the function f is modified
if necessary

s:  The string on which to iterate
f:  The function to apply to each character

---------------------------------------------------------------
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		(*f)(i, s++);
		i++;
	}
}

/* int main(void)
{
	
} */