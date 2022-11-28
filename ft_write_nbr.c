/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:25:12 by ddemers           #+#    #+#             */
/*   Updated: 2022/11/08 17:25:12 by ddemers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_nbr(unsigned int nb)
{
	if (nb > 9)
		ft_write_nbr(nb / 10);
	ft_write(nb % 10 + 48);
}

int	ft_number_length(unsigned int nbr)
{
	if (nbr >= 1000000000)
		return (10);
	if (nbr >= 100000000)
		return (9);
	if (nbr >= 10000000)
		return (8);
	if (nbr >= 1000000)
		return (7);
	if (nbr >= 100000)
		return (6);
	if (nbr >= 10000)
		return (5);
	if (nbr >= 1000)
		return (4);
	if (nbr >= 100)
		return (3);
	if (nbr >= 10)
		return (2);
	return (1);
}

int	ft_bridge(int nb)
{
	int				check_neg;
	unsigned int	conversion;

	check_neg = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		check_neg = ft_write('-');
		nb = -nb;
	}
	conversion = nb;
	ft_write_nbr(conversion);
	return (ft_number_length(conversion) + check_neg);
}

int	ft_bridge_unsigned(unsigned int nbr)
{
	ft_write_nbr(nbr);
	return (ft_number_length(nbr));
}
