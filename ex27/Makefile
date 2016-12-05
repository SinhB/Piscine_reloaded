#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybecret <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 14:13:17 by ybecret           #+#    #+#              #
#    Updated: 2016/12/03 15:08:49 by ybecret          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRCS = ft_display_file.c

OBJ = $(SRCS:.c=.o)

CC = gcc

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
