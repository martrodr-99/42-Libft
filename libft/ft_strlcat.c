/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr <martrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:38:29 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 20:38:29 by martrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
STRLCAT

- strlcat copies the src string and appends the null-terminated
to the end of dst string and return de combined length of both
src and dst

- dstsize: sets the length of the destination string - is equal
to the size of the dst buffer (limita o tamanho copiado para dst)

---------------------------------------------------------------
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	j;
	size_t	i;

	len_src = ft_strlen(src);
	if (dest)
		len_dest = ft_strlen(dest);
	else
		len_dest = 0;
	j = len_dest;
	i = 0;
	if (size < len_dest || size == 0)
		return (size + len_src);
	while (j < (size - 1) && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (len_dest + len_src);
}

/* int main (void)
{
	char dst[20] = "Ola, ";
	char src[] = "marta!";

	strlcat(dst, src, 10);
	printf("strlcat: %s\n", dst);

	ft_strlcat(dst, src, 10);
	printf("ft_strlcat: %s\n", dst);
} */