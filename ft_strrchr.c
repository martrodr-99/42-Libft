/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:32:30 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:53:20 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
STRRSTR

- strrchr locates the last occurrence of c (converted to a char)
in the string pointed to by str

- null is considered to be part of the string - if c is '\0'
the function locates it

- return a pointer to the located character or null if the
character does not appear in the string

- NOTA: ((char *)&str[len]): char pointer para o endereço
                             da ultima letra de str

        ((char *)str + len)): char pointer para o endereço de
							  memoria para onde str aponta + len,
							  dando a ultima letra do str

---------------------------------------------------------------
*/

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + len);
	while (len >= 0)
	{
		if (str[len] == c)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}

/* int main(void)
{
	char str1[] = "marta";
	char str2 = '\0';
	char c = 'a';

	printf("strrchr: %s\n", strrchr(str1, c));
	printf("strrchr: %s\n", strrchr(&str2, c));

	printf("ft_strrchr: %s\n", ft_strrchr(str1, c));
	printf("ft_strrchr: %s\n", ft_strrchr(&str2, c));
} */