# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helvi <helvi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:00:35 by hlaineka          #+#    #+#              #
#    Updated: 2020/05/19 09:48:21 by helvi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB_LIBFT = libft/libftbasic.a

LIB_PRINTF = printf/libftprintf.a

all: $(NAME)

$(NAME): fclean
	cd libft && make re
	cd printf && make re
	ar rc $(NAME) $(LIB_LIBFT) $(LIB_PRINTF)
	make clean

clean:
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

mclean: fclean

re: fclean all
