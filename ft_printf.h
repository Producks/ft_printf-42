/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:32:07 by ddemers           #+#    #+#             */
/*   Updated: 2022/11/09 16:45:05 by ddemers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_write_string(const char *str);
int		ft_write(int c);
int		ft_write_c(unsigned char c);
int		ft_check_type(va_list args, const char type);
void	ft_write_nbr(unsigned int nb);
int		ft_number_length(unsigned int nbr);
int		ft_bridge(int nb);
int		ft_bridge_unsigned(unsigned int nbr);
int		ft_write_nbr_hex(unsigned int nbr);
int		ft_write_nbr_hexc(unsigned int nbr);
int		ft_write_pointer(unsigned long long ptr);
int		ft_write_nbr_ptr(unsigned long long nbr);

#endif
