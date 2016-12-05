#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybecret <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 12:04:20 by ybecret           #+#    #+#              #
#    Updated: 2016/12/03 18:08:56 by ybecret          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS =	srcs/ft_putchar.c	\
		srcs/ft_putstr.c	\
		srcs/ft_strcmp.c	\
		srcs/ft_strlen.c	\
		srcs/ft_swap.c		\

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS += -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : clean