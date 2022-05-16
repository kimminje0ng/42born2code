/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:48:48 by minjeki2          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:01 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			num;
	unsigned char	*tmp;

	num = 0;
	tmp = (unsigned char *)s;
	while (num < n)
	{
		tmp[num++] = (unsigned char)0;
	}
	return (s);
}
