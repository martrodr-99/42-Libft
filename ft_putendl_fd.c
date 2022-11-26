/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:40 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:49:06 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
---------------------------------------------------------------
PUTENDL_FD

- ft_putendl_fd writes the string s to the file descriptor fd
followed by a '\n' to make a new line

---------------------------------------------------------------
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	ft_putendl_fd("Texto Aqui!!", 1);
	return(0);
} */
