/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:28:30 by minjeki2          #+#    #+#             */
/*   Updated: 2022/03/10 18:29:38 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_size;
	size_t src_size;
	size_t i;
	size_t j;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);

	if (dst_size < size)
		return (dst_size + src_size);

	i = 0;
	while (dst[i])
		i++;

	j = 0;
	while (*src && i + 1 < size)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';

	return (dst_size + src_size);
}
