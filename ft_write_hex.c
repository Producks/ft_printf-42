/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:28:01 by ddemers           #+#    #+#             */
/*   Updated: 2022/11/09 16:33:38 by ddemers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_nbr_hex(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_write_nbr_hex(nbr / 16);
		i += ft_write_nbr_hex(nbr % 16);
	}
	else
	{
		write(1, &"0123456789abcdef"[nbr % 16], 1);
		i++;
	}
	return (i);
}

int	ft_write_nbr_hexc(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_write_nbr_hexc(nbr / 16);
		i += ft_write_nbr_hexc(nbr % 16);
	}
	else
	{
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
		i++;
	}
	return (i);
}
