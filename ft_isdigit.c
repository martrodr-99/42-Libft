/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:22:02 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/05 22:52:10 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main(void)
{
  unsigned char i = '4';

  printf("Result = %d\n", ft_isdigit(i));
  printf("Original result = %d\n", isdigit(i));
}*/