# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abazerou <abazerou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 17:59:52 by abazerou          #+#    #+#              #
#    Updated: 2022/11/24 23:03:37 by abazerou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_printf.c ft_printfu.c ft_printfx.c ft_printf_xx.c ft_printf_p.c 

OBJ = $(SRC:.c=.o)

CC = gcc

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJ) $(HEADER)
	ar -rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ) $(OBJB)

fclean : clean
	rm -f $(NAME)

re : fclean all