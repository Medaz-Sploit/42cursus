FLAGS = -f macho64
CC = nasm
LINKER = ld
SRC = ft_strlen.s
OBJ = $(SRC:.s=.o)

all: $(OBJ)

$(OBJ):
	@$(CC) $(FLAGS) $(SRC)
	@$(LINKER) $(OBJ)
clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)

re: fclean all
.PHONY: all re fclean clean
