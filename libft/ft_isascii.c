/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:07:00 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:39:59 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
ASCII

- isascii() function tests for an ASCII character in the
range 0 to 127

---------------------------------------------------------------
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main (void)
{
    unsigned char i = 'A';
   unsigned char e = 0x80;

    printf("Result = %d, %d\n", ft_isascii(i), ft_isascii(e));
    printf("Original result = %d, %d\n", isascii(i), isascii(e));
}*/