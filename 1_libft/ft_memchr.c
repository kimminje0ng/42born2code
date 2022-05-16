/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:49:15 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:15 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (a == tmp[i])
			return (tmp + i);
		i++;
	}
	return (NULL);
}
