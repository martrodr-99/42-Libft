/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:18:27 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 13:42:29 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRNSTR

- strnstr locates the first occurrence of a substring (needle)
in the string str, where not more than n characters are searched

- characters that appear after a ‘\0’ character are not searched

- return str if needle is an empty string; return null if needle 
occurs nowhere in str; otherwise return a pointer to the first
character of the first occurrence of needle
---------------------------------------------------------------
*/
char	*ft_strnstr(const char *str, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!needle || !str) && n == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] != '\0' && needle[j] != '\0'
			&& str[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char str[] = "ola eu sou a marta";
	char needle[] = "sou";
	
	printf("strnstr: %s\n", strnstr(str, needle, 10));
	printf("ft_strnstr: %s\n", ft_strnstr(str, needle, 10));
} */