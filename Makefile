# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:00:35 by hlaineka          #+#    #+#              #
#    Updated: 2019/10/17 13:22:29 by hlaineka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c 

OSRC = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OSRC)

main: mclean all
	gcc main.c -o supermain -L. -lft

clean:
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

mclean: fclean
	-rm -f supermain

re: fclean all
