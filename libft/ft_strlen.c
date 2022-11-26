/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr <martrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:06:42 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 20:19:21 by martrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
STRLEN

- strlen() function computes the length of the string 
pointed to by s and returns the number of characters that 
precede the terminating NULL character

- size_t is an unsigned type, it cannot represent any negative 
values(<0) and it's used when we are counting something, and are
sure that it cannot be negative

---------------------------------------------------------------
*/
size_t	ft_strlen(const char *s)
{
	const char	*ptr;

	ptr = s;
	while (*s != '\0')
		s++;
	return (s - ptr);
}

/* size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
} */

/* int main(void)
{
    char str[] = "ola marta";

    printf("strlen: %ld\n", ft_strlen(str));
    printf("ft_strlen: %ld\n", strlen(str));
} */