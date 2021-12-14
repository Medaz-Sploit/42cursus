# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 12:01:27 by mazoukni          #+#    #+#              #
#    Updated: 2021/12/14 18:03:26 by mazoukni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
CC = nasm -f macho64
Test = LiveIsHard
OBJ =	ft_strlen.o ft_strcmp.o ft_strdup.o \
		ft_strcpy.o ft_read.o ft_write.o

%.o:	%.s
	@$(CC) ft_strlen.s
	@$(CC) ft_strcmp.s
	@$(CC) ft_strdup.s
	@$(CC) ft_strcpy.s
	@$(CC) ft_read.s
	@$(CC) ft_write.s


all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

test:
	gcc -o $(Test) main.c libasm.a
	./LiveIsHard

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) $(Test)

re: fclean all

.PHONY: all re fclean clean test
