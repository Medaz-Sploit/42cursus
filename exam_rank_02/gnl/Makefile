# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 21:25:16 by mazoukni          #+#    #+#              #
#    Updated: 2021/11/04 11:22:20 by mazoukni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC =	get_next_line.c main.c


all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -DBUFFER_SIZE=1000 -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all