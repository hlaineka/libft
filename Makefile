# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlaineka <hlaineka@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:00:35 by hlaineka          #+#    #+#              #
#    Updated: 2020/09/03 10:39:17 by hlaineka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OSRC_LIBFT = libft/*.o

OSRC_PRINTF = printf/*.o

INC_LIBFT = includes/libft.h

INC_PRINTF = includes/ft_printf.h

all: $(NAME)

$(NAME): fclean
	@cd libft && make re
	@cd printf && make re
	@ar rc $(NAME) $(OSRC_LIBFT) $(OSRC_PRINTF) $(INC_LIBFT) $(INC_PRINTF)
	@cd libft && make clean
	@cd printf && make clean
	@make clean

clean:
	@rm -f $(OSRC)

fclean: clean
	@rm -f $(NAME)

mclean: fclean

re: fclean all
