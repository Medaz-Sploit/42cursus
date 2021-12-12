# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 12:01:27 by mazoukni          #+#    #+#              #
#    Updated: 2021/12/12 12:06:02 by mazoukni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
FLAGS = -Wall -Wextra -Werror
CC = nasm -f macho64
SRC =	_ft_strlen.s _ft_strcmp.s _ft_strdup.s \
		_ft_strcpy.s _ft_read.s _ft_write.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -c $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean
