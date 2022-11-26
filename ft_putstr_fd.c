/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr <martrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:22:32 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/26 20:08:42 by martrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}

/* int	main(void)
{
	ft_putstr_fd("Texto Aqui!!\n", 1);
	return(0);
} */