/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:23:48 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 12:51:38 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
--------------------------------------------------------------
ATOI
- atoi converts the ASCII string pointed to by str to int

- funtion stops reading the string at the first character that
it cannot recognize as part of a number

- return 0 if no valid conversion could be performe

---------------------------------------------------------------
*/
int	ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		sig;

	i = 0;
	res = 0;
	sig = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && *str)
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * sig);
}

/* int	main(void)
{
	char str[] = "  		-12345af6789";
	
	printf("atoi: %d\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));
} */