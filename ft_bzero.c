/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:38:21 by martrodr          #+#    #+#             */
/*   Updated: 2022/11/25 22:38:15 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
BZERO

- bzero fills the first n bytes of the object 
pointed to by s with zero (NUL) bytes

---------------------------------------------------------------
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int main(void)
{
    char a[] = "ola marta";

	printf("%s\n", a);
	bzero(a, 3);
	printf("bzero: %s\n", a);

	ft_bzero(a, 3);
	printf("ft_bzero: %s\n", a);
}*/