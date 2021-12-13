# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 12:01:27 by mazoukni          #+#    #+#              #
#    Updated: 2021/12/13 19:09:55 by mazoukni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
FLAGS = -Wall -Wextra -Werror
CC = /Users/mazoukni/homebrew/Cellar/nasm/2.15.05/bin/nasm -f macho64
SRC =	_ft_strlen.s _ft_strcmp.s _ft_strdup.s \
		_ft_strcpy.s _ft_read.s _ft_write.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRC)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean
