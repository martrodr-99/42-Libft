/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:35:26 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:40:54 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
ITOA

- allocates memory and returns a new string of characters
terminated with a '\0' that is the char equivalent of the
int passed in the parameter or NULL if the allocation fails

- negative numbers must be handled

n:  the integer to convert
---------------------------------------------------------------
*/
static int	digit_count(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		count;
	int			sig;

	count = digit_count(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	sig = 1;
	str[count] = '\0';
	count--;
	if (n < 0)
	{
		str[0] = '-';
		sig = -1;
	}
	else if (n == 0)
		str[count] = '0';
	while (n != 0)
	{
		str[count] = (n % 10 * sig) + '0';
		n /= 10;
		count--;
	}
	return (str);
}

/* int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;
	
	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;

	printf("ft_itoa1: %s\n",ft_itoa(number1));
	printf("ft_itoa2: %s\n",ft_itoa(number2));
	printf("ft_itoa3: %s\n",ft_itoa(number3));
	printf("ft_itoa4: %s\n",ft_itoa(number4));
	printf("ft_itoa5: %s\n",ft_itoa(number5));
	printf("ft_itoa6: %s\n\n",ft_itoa(number6));

	printf("ft_itoa7: %s\n",ft_itoa(number7));
	printf("ft_itoa8: %s\n",ft_itoa(number8));
	printf("ft_itoa9: %s\n",ft_itoa(number9));
	printf("ft_itoa10: %s\n",ft_itoa(number10));
	printf("ft_itoa11: %s\n",ft_itoa(number11));
	printf("ft_itoa12: %s\n",ft_itoa(number12));
} */