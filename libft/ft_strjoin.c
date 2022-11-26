/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:03:03 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:50:41 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRJOIN

- strjoin allocates memory for a new
string terminated by '\0', which is the result of the 
concatenation of s1 and s2

s1: prefix string
s2: suffix string

- returns the new string or NULL if the allocation fails

---------------------------------------------------------------
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	temp = (char *)malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (temp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		temp[i + j] = s2[j];
		j++;
	}
	temp[i + j] = '\0';
	return (temp);
}

/* int main(void)
{
	char s1[] = "ola eu ";
	char  s2[] = "sou a marta";
	
	printf("ft_strjoin: %s\n", ft_strjoin(s1, s2));
}  */