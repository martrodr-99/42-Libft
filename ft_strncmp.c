/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:05:19 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:52:11 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRNCMP

- strncmp compares n characters between strings s1 and s2,
that appears after a ‘\0’

- return integer greater than, equal to, or less than 0,
according as the string str1 is to the string str2

---------------------------------------------------------------
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n - 1 > 0)
	{
		i++;
		n--;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/* int main(void)
{
	char str1[] = "marti";
	char str2[] = "martinha";

	printf("strncmp: %d\n", strncmp(str1, str2, 6));

	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 6));
} */