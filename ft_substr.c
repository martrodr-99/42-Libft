/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:27:13 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:53:52 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
SUBSTR

- substr allocates memory and returns a new copy
as a portion of the string ’s’

- the portion begins at index ’start’ and will
have the length of the parameter ’len’

- returns the substring or NULL if the allocation fails

s:  string from which to create the portion
start:  start index of the portion in the string ’s’
(position in index where i want to start)
len:  maximum length of the portion

---------------------------------------------------------------
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*temp;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		temp = (char *)malloc(sizeof(char));
		if (temp == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	i = 0;
	temp = (char *)malloc (sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	while (i < len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return (temp);
}

/* int main(void)
{
	char s[] = "ola eu sou a marta";
	int start = 13;
	
	printf("ft_substr: %s\n", ft_substr(s, start, 5));
} */