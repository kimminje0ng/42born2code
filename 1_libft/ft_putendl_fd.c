/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:49:28 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:29 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
	return ;
}
