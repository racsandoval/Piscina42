# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsandova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 11:28:28 by rsandova          #+#    #+#              #
#    Updated: 2019/12/08 18:33:53 by gquero-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

FILES = main.c functions/ft_open_dict.c functions/ft_putstr.c functions/ft_split.c functions/ft_create_dict.c functions/ft_arr_free.c functions/ft_struct_free.c functions/ft_verify_input.c functions/ft_print_value.c functions/ft_print_block.c functions/ft_strcmp.c functions/ft_search_dict.c

FILESO = main.o functions/ft_open_dict.o functions/ft_putstr.o functions/ft_split.o functions/ft_create_dict.o functions/ft_arr_free.o functions/ft_struct_free.o functions/ft_verify_input.o functions/ft_print_value.o functions/ft_print_block.o functions/ft_strcmp.o functions/ft_search_dict.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	/bin/rm -f $(FILESO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
