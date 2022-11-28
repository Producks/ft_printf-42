# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddemers <ddemers@student.42quebec.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:35:00 by ddemers           #+#    #+#              #
#    Updated: 2022/11/09 16:33:12 by ddemers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS 	= ${src:.c=.o}
LIBC 	= ar rcs
REMOVE	= rm -f
src =	ft_printf.c\
		ft_write.c\
		ft_write_nbr.c\
		ft_write_ptr.c\
		ft_write_hex.c
$(NAME): ${OBJS}
		 ${LIBC} $(NAME) ${OBJS}
all:$(NAME)

clean :
		${REMOVE} ${OBJS}

fclean :clean
		${REMOVE} $(NAME)

re:fclean all

.PHONY: all clean fclean re 