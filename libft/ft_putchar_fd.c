/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:44 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:48:40 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
---------------------------------------------------------------
PUTCHAR

- ft_putchar_fd is exactly the same as our ft_putchar
function except that this function requires the file
descriptor of where to write the output as a parameter
(rather than having the first parameter of write be a
1 for the standard output we take ft_putchar's int fd
parameter and use it as the first parameter for write)

- we can choose if we want the to use a file descriptor
obtained from the open system call, or we use 0 (standart
input), 1 (standard output), or 2 (standard error)

c:  The character to output
fd:  The file descriptor on which to write

---------------------------------------------------------------
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/* int	main(void)
{
	ft_putchar_fd('a', 1);
	printf("\n");
	return(0);
} */