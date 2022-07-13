/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeki2 <minjeki2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:54:18 by minjeki2          #+#    #+#             */
/*   Updated: 2022/06/06 13:54:26 by minjeki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cheking(char format)
{
	char	*types;
	int		i;

	i = 0;
	types = "cspdiuxX%";
	while (types[i])
	{
		if (format == types[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_type(char format, va_list *args)
{
	int	len;

	len = 0;
	if (format == 's')
		len += ft_putstr(va_arg(*args, char *));
	if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(*args, int));
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	if (format == 'x')
		len += ft_hexdecimal(va_arg(*args, int));
	if (format == 'X')
		len += ft_hexdecimal_2(va_arg(*args, int));
	if (format == 'u')
		len += ft_unsigned(va_arg(*args, int));
	if (format == 'p')
		len += ft_pointer(va_arg(*args, void *));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		len;

	count = 0;
	len = 0;
	va_start(args, format);
	while (format[count])
	{
		if (format[count] == '%' && ft_cheking(format[count + 1]) == 1)
		{
			if (format[count + 1] == '%')
				len += ft_putchar('%');
			else
				len += ft_check_type(format[count + 1], &args);
			count++;
		}
		else
			len += ft_putchar(format[count]);
		count++;
	}
	va_end(args);
	return (len);
}
