# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 15:42:50 by hmidoun           #+#    #+#              #
#    Updated: 2019/02/13 08:16:51 by midounhoc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/*.c
HEADER = ./includes/
OBJ = *.o
CC = gcc
FLAG = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) :
	$(CC) $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean
