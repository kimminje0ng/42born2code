/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:49:33 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:33 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	i = 0;
	if (fd >= 0)
	{
		while (s[i])
		{
			c = s[i++];
			write(fd, &c, 1);
		}
	}
	return ;
}
