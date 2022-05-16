/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:49:19 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:20 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*s;
	size_t	i;

	if (dst == src)
		return (dst);
	tmp = dst;
	s = (char *)src;
	i = 0;
	while (n--)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
