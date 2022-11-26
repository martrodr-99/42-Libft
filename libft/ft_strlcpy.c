/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:34:12 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 12:24:09 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
STRLCPY

- strlcpy copies the src string to the dst string, 
replacing the content of the dst string by the content of src string, 
and return the total length of the string src

- only dstsize characters maximum are copied

- operation end when the null character is found in dst or the value 
of dst_size was reached

---------------------------------------------------------------
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (dst_size == 0)
		return (len_src);
	while (src[i] != '\0' && i < (dst_size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/* int main (void)
{
	char dst[] = "Ola";
	char src[] = "marta";

	strlcpy(dst, src, 4);
	printf("strlcpy: %s\n", dst);

	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy: %s\n", dst);
} */