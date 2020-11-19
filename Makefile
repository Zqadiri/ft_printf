# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/16 19:52:11 by zqadiri           #+#    #+#              #
#    Updated: 2019/12/26 14:39:11 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
HEADER = ./
SRC = ./*.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): 
		gcc $(CFLAGS) -c -I $(HEADER) $(SRC)
	 	ar rsc $(NAME) *.o
		ranlib $(NAME)
clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
