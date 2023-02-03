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

SRC =	src/main.c \
		src/singleton.c \
		src/setup.c \
		src/teardown.c \
		src/events_handler.c \
		src/events/closed.c \
        src/events/resized.c \
        src/events/lost_focus.c \
        src/events/gained_focus.c \
        src/events/text_entered.c \
        src/events/key_pressed.c \
        src/events/key_released.c \
        src/events/mouse_wheel_moved.c \
        src/events/mouse_wheel_scrolled.c \
        src/events/mouse_button_pressed.c \
        src/events/mouse_button_released.c \
        src/events/mouse_moved.c \
        src/events/mouse_entered.c \
        src/events/mouse_left.c \
        src/events/joystick_button_pressed.c \
        src/events/joystick_button_released.c \
        src/events/joystick_moved.c \
        src/events/joystick_connected.c \
        src/events/joystick_disconnected.c \
        src/events/touch_began.c \
        src/events/touch_moved.c \
        src/events/touch_ended.c \
        src/events/sensor_changed.c \
        src/events/count.c

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
