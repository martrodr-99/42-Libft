/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:44:22 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 11:59:28 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
MEMCPY

- memcpy copies n bytes from the location pointed to by src directly 
to the memory block pointed to by dst and return dst

- doesn´t check for overflow or \0 

- char *s = (char *)src --> typecast src and dst addresses to (char *)

---------------------------------------------------------------
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (!src && !dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* int main(void)
{
    char src[] = "ola";
    char dst[] = "marta";

	printf("Source: %s\nDestination: %s\n", src, dst);
	memcpy(dst, src, 3);
	printf("memcpy: %s\n", dst);

	ft_memcpy(dst, src, 3);
	printf("ft_memcpy: %s\n", dst);
} */