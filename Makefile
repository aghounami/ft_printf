# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 13:38:13 by aghounam          #+#    #+#              #
#    Updated: 2023/11/08 17:11:39 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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