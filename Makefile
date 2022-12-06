.PHONY: clean all re fclean
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils2.c 

OBJS = $(SRC:.c=.o)

all: $(NAME)

${NAME}:${OBJS}
	@ar rc ${NAME} ${OBJS}

clean:
	@rm -f $(OBJS)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all