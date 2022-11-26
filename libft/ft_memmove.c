/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:45:04 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 12:04:52 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
MEMMOVE
- memmove copies n bytes of src to dst, but first src is copied 
to a temporary array and return dst

- allows copying between objects that might overlap

- char *s = (char *)src --> typecast src and dst addresses to (char *)

---------------------------------------------------------------
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (n != 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}

/*int main(void)
{
    //TESTE 1:
    char a[] = "ola";
    
	memmove(a+1, a, 1);
	printf("memmove: %s\n", a);

	ft_memmove(a+1, a, 1);
	printf("ft_memmove: %s\n", a);

    //TESTE 2:
    char src[] = "ola";
    char dst[] = "marta";

	printf("Source: %s\nDestination: %s\n", src, dst);
	memmove(dst, src, 3);
	printf("memmove: %s\n", dst);

	ft_memmove(dst, src, 3);
	printf("ft_memmove: %s\n", dst);
}*/