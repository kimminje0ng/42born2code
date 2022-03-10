/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:28:36 by minjeki2          #+#    #+#             */
/*   Updated: 2022/03/10 18:29:35 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	size_t;

int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_isprint(int c);

size_t					ft_strlen(const char *str);
size_t					strlcpy(char *dst, const char *src, size_t size);
size_t					strlcat(char *dst, const char *src, size_t size);

#endif LIBFT_H
