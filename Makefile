##
## EPITECH PROJECT, 2022
## My Paint
## File description:
## Makefile
##

CFLAGS   =	-W -Wall -Werror -Wextra
CPPFLAGS =	-I./include

SRC =	src/main.c
OBJ	=	$(SRC:.c=.o)

NAME =	my_paint

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
