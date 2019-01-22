# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 15:42:50 by hmidoun           #+#    #+#              #
#    Updated: 2019/01/14 15:50:02 by midounhoc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/*.c
HEADER = ./includes/
OBJ = ${SRCS:%.c=.obj/%.o}
CC = gcc
FLAG = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) :$(OBJ)
	$(CC) $(FLAG) -c $(SRC) -I $(HEADER)
	ar  $(NAME) $(OBJ)
	runlib $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
