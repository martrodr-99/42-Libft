/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:52:04 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:40:33 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
ISPRINT

- isprint() function tests for any printable character, 
including a space (' ')
- a printable character is a character that occupies a 
printing position on a display (this is the opposite of a control
character, checked with iscntrl)

---------------------------------------------------------------
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main (void)
{
    unsigned char i = ' ';//Space

    printf("Result = %d\n", ft_isprint(i));
    printf("Original result = %d\n", isprint(i));    
}*/
