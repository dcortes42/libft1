# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcortes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/03 17:22:36 by dcortes           #+#    #+#              #
#    Updated: 2016/12/03 17:41:01 by dcortes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

INCLUDE = libft.h

OBJ = *.o

all: $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -c -I$(INCLUDE) $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
