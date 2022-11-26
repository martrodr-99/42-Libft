/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:04:46 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:49:51 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
STRCHR

- strchr searches for the first occurrence of the 
character c (unsigned char) in the string pointed to by str

- returns a pointer to the first occurence of the character in 
str ou null if character is not found

---------------------------------------------------------------
*/
char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (!c && str[i] == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/* int main(void)
{
	char str[] = "marta";
	
	printf("strchr: %s\n", strchr(str, 't'));

	printf("ft_strchr: %s\n", ft_strchr(str, 't'));
} */