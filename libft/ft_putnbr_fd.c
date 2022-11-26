/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr <martrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:35 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 20:11:30 by martrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
PUTNBR

- ft_putnbr_fd is exactly the same as our ft_putnbr function
except that we will be using our ft_putchar_fd function instead
of ft_putchar beacuse we will be accepting a parameter for this
function that is our file descriptor

---------------------------------------------------------------
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0 || n > 2147483647)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

/* int	main(void)
{
	ft_putnbr_fd(-11, 1);
	printf("\n");
	return(0);
} */