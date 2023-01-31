##
## EPITECH PROJECT, 2022
## My Paint
## File description:
## Makefile
##

CFLAGS   =	-W -Wall -Werror -Wextra
CPPFLAGS =	-I./include

CSFML =	-lcsfml-graphics \
		-lcsfml-network \
		-lcsfml-window \
		-lcsfml-system \
		-lcsfml-audio

SRC =	src/main.c
OBJ	=	$(SRC:.c=.o)

NAME =	my_paint

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CSFML)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
