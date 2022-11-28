/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:08:58 by ddemers           #+#    #+#             */
/*   Updated: 2022/11/09 16:31:41 by ddemers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_write_string(const char *str)
{
	int	i;
	int	length;

	i = -1;
	length = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[++i])
		length += ft_write(str[i]);
	return (length);
}

int	ft_write_c(unsigned char c)
{
	return (ft_write(c));
}

int	ft_check_type(va_list args, const char type)
{
	if (type == 'c')
		return (ft_write_c(va_arg(args, int)));
	else if (type == 's')
		return (ft_write_string(va_arg(args, const char *)));
	else if (type == 'p')
		return (ft_write_pointer(va_arg(args, unsigned long long)));
	else if (type == 'd' || type == 'i')
		return (ft_bridge(va_arg(args, int)));
	else if (type == 'u')
		return (ft_bridge_unsigned(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_write_nbr_hex(va_arg(args, unsigned int)));
	else if (type == 'X')
		return (ft_write_nbr_hexc(va_arg(args, unsigned int)));
	else if (type == '%')
		return (ft_write('%'));
	else
		return (0);
}
