/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:55:45 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:46:54 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
MEMCHR

- memchr locates the first occurrence of c
(converted to an unsigned char) in string str 

- returns a pointer to the byte located or NULL
if no such byte exists within n bytes

---------------------------------------------------------------
*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "marta";
	char c = 'r';
	char *test1;
	char *test2;
	
	test1 = memchr(str, c, 3);
	test2 = ft_memchr(str, c, 3);
	
	printf("memchr: %s\n", test1);
	printf("ft_memchr: %s\n", test2);
} */