/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:03 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:39:06 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
ISALPHA
- a função recebe como argumento um inteiro que armazena em c
- c é o parametro que recebe o argumento enviado para a função

---------------------------------------------------------------
*/
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main(void)
{
	char i = 'a';

	printf("Result = %d\n", ft_isalpha(i));
	printf("Original result = %d\n", isalpha(i));
}*/