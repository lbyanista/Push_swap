# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 15:20:10 by mlabrayj          #+#    #+#              #
#    Updated: 2021/06/07 12:25:58 by mlabrayj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./push_swap

SRC =	push_swap.c 	\
		ft_atoi.c		\
		ft_isdigit.c	\
		ft_isnumber.c	\
		

FLAGS = -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
		@gcc $(SRC) $(FLAGS) -fsanitize=address -o $(NAME)

clean:
	@rm -rf $(NAME) *.dSYM

fclean:	clean

re:	fclean all