# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbucher <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 14:24:11 by vbucher           #+#    #+#              #
#    Updated: 2026/11/10 12:56:03 by vbucher          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FILES = $(shell find . -name "*.c")

OBJECTS = $(FILES:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)
