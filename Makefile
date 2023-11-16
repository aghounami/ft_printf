SRCS = *.c

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f
SRC_OBJ = $(SRCS:.c=.o)
$(NAME) :
	$(CC) $(CFLAGS) -c $(SRCS)
	$(LIBC) $(NAME) $(SRC_OBJ)

all: $(NAME)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re