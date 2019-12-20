# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsandova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 17:09:42 by rsandova          #+#    #+#              #
#    Updated: 2019/12/11 08:16:38 by ecerquei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILES = main.c functions/files_file.c \
		functions/files_stdin.c functions/ft_get_biggest_square.c \
		functions/ints.c functions/square.c \
		functions/string_split.c functions/strings.c \
		functions/validation.c functions/ft_squarecmp.c \
		functions/coordinates.c \
		functions/ft_resolve.c

FILESO = main.o functions/files_file.o \
			functions/files_stdin.o functions/ft_get_biggest_square.o \
			functions/ints.o functions/square.o \
			functions/string_split.o functions/strings.o \
			functions/validation.o functions/ft_squarecmp.o \
			functions/coordinates.o \
			functions/ft_resolve.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	@/bin/rm -f $(FILESO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
