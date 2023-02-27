# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 10:21:30 by gimartin          #+#    #+#              #
#    Updated: 2022/03/08 10:22:49 by gimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server client
SRCS = server.c client.c
OBJ = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: $(NAME)

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft

clean:
	rm -f $(OBJ)
	make -C libft clean
	
fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re
