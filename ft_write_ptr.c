/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:30:11 by ddemers           #+#    #+#             */
/*   Updated: 2022/11/09 16:30:21 by ddemers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_nbr_ptr(unsigned long long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_write_nbr_ptr(nbr / 16);
		i += ft_write_nbr_ptr(nbr % 16);
	}
	else
	{
		write(1, &"0123456789abcdef"[nbr % 16], 1);
		i++;
	}
	return (i);
}

int	ft_write_pointer(unsigned long long ptr)
{
	int	i;

	write (1, "0x", 2);
	i = 2;
	i += ft_write_nbr_ptr(ptr);
	return (i);
}
