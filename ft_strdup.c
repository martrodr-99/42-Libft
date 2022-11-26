/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:29:25 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 13:44:33 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRDUP

- strdup save a copy of a string - allocates sufficient memory 
for a copy of the string s1 and does the copy

- returns a pointer to it s1

---------------------------------------------------------------
*/
char	*ft_strdup(const char *s1)
{
	char	*temp;

	temp = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (temp != NULL)
	{
		ft_strlcpy (temp, s1, (ft_strlen(s1) + 1));
		return (temp);
	}
	return (NULL);
}

/* int main (void)
{
	char str[] = "MARTA";
	
	printf("ft_strdup: %s\n", ft_strdup(str));
	printf("strdup: %s\n", strdup(str));
} */