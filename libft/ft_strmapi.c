/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:25 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:51:50 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
STRMAPI

- strmapi applies the given function f to each character of the 
given string, and passing its index as first argument, in order
to create a new string that is the result of have function f run
on string s

- return a 'fresh' copy of the modified string

s:  The string on which to iterate
f:  The function to apply to each character

---------------------------------------------------------------
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char my_f(unsigned int i, char s)
{
	printf("My inner function: index = %d and %c\n", i, s);
	if (s == '.')
		return (s);
	return (s - 32);
}
int main()
{
	char s[] = "hello.";
	
	printf("s: %s\n", s);
	printf("ft_strmapi: %s\n", ft_strmapi(s, my_f));
}  */