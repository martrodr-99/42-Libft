/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:18:46 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:53:35 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRTRIM

- strtrim allocates memory for a new string that is a copy of
’s’ with the characters specified in ’set’ removed
from the beginning and the end of the string

s: string to be trimmed
set: reference set of characters to trim

- returns the new string or NULL if the allocation fails

---------------------------------------------------------------
*/
char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;

	if (!s || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	i = ft_strlen(s);
	while (i && ft_strchr(set, *(s + i)))
		i--;
	return (ft_substr(s, 0, i + 1));
}

/* int main(void)
{
	char s[] = "0000marta0000";
	char set[]= "0";

	printf("ft_strtrim: %s\n", ft_strtrim(s, set));
} */