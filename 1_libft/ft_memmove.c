/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:49:21 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:22 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_new;
	unsigned char	*dst_new;

	if (dst == src || !len)
		return (dst);
	src_new = (unsigned char *)src;
	dst_new = (unsigned char *)dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		*(dst_new + len) = *(src_new + len);
	return (dst);
}
