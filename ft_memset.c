/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:26:49 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:48:23 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
/*
---------------------------------------------------------------
MEMSET

- Fill block of memory: memset fills n bytes starting at s with
the value c and return a pointer to the destination buffer
(the value of s)

s = pointer to the memory that i want to set
c = value that i want to store in each byte
n = the number os bytes to set

---------------------------------------------------------------
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* int main(void)
{
    char a[] = "ola marta";
	char c = '2';

	printf("%s\n", a);
	memset(a, c, 3);
	printf("memset: %s\n", a);

	ft_memset(a, c, 3);
	printf("ft_memset: %s\n", a);
} */