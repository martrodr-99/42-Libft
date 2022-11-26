/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:29:29 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 13:44:10 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*temp;

	temp = malloc (nitems * size);
	if (temp != NULL)
		ft_memset (temp, '\0', nitems * size);
	return (temp);
}

/* int main (void)
{ 	
	char *str1;
	char *str2;

	str1 = (char *)ft_calloc(4, 9);
	str2 = (char *)calloc(4, 9);

	printf("ft_calloc: %s\n", str1);
	printf("calloc: %s\n", str2);
} */