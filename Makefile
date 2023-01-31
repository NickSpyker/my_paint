##
## EPITECH PROJECT, 2022
## My Paint
## File description:
## Makefile
##

CFLAGS   =	-g3 -W -Wall -Werror -Wextra
CPPFLAGS =	-I./include

CSFML =	-lcsfml-graphics \
		-lcsfml-network \
		-lcsfml-window \
		-lcsfml-system \
		-lcsfml-audio

SRC =	src/main.c \
		src/singleton.c \
		src/setup.c \
		src/teardown.c \
		src/events_handler.c \
		src/time_handler.c

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
