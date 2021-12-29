# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelache <abelache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 10:43:53 by abelache          #+#    #+#              #
#    Updated: 2021/12/14 16:13:55 by abelache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Push-Swap.a

SRC =  median.c Push.c Rotate.c Rotatereverse.c Swap.c ft_isalnum.c ft_atoi.c checkarg.c testeur.c ft_calloc.c inittab.c main.c ft_putstr.c

OBJ = ${SRC:.c=.o}

%.o: %.c Push-Swap.h
	gcc -Wall -Wextra -Werror -c -I./includes $< -o $@

$(NAME): ${OBJ}
	ar rcs $@ $^

all: $(NAME)
	
clean:
	rm -f ${OBJ} ${OBN}
 
fclean: clean
	rm -f ${NAME}
 
re: fclean all

.PHONY: all clean fclean re
