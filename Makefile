# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlabrayj <mlabrayj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 15:20:10 by mlabrayj          #+#    #+#              #
#    Updated: 2021/06/09 12:21:54 by mlabrayj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./push_swap

SRC =	push_swap.c 	\
		ft_atoi.c		\
		ft_isdigit.c	\
		ft_isnumber.c	\
		ft_check_args.c \
		ft_strcmp.c		\
		ft_strlen.c		\
		ft_is_sorted.c	\
		operations_a.c	\
		operations_b.c	\
		rembile_a.c		\
		sort_table.c 	\
		sorting.c 		\
		sorting_a.c 	\
		push_a_b.c		\
		

FLAGS = -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
		@gcc $(SRC) $(FLAGS) -fsanitize=address -o $(NAME)

clean:
	@rm -rf $(NAME) *.dSYM

fclean:	clean

re:	fclean all