/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:09:38 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:54:16 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
TOUPPER

- toupper converts lowercase to uppercase letter and returns 
uppercase equivalent to c (return as an int that can be 
implicity casted to char)

- int c = letter to be converted

---------------------------------------------------------------
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* int	main(void)
{
	int	a = 'a';
	int	b = 'A';
	int	c = ' ';
	int	d = 'c';
	int	e = 0x80;

	printf("ft_toupper:");
	printf("%c\n", ft_toupper(a));
	printf("%c\n", ft_toupper(b));
	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(d));
	printf("%c\n", ft_toupper(e));
} */