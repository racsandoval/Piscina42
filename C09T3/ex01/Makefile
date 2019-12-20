#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsandova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/12 07:41:08 by rsandova          #+#    #+#              #
#    Updated: 2019/12/12 21:45:24 by rsandova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/

INCLUDES = includes/

FUNCTIONS = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap

OBJECTS = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

all: $(NAME)

$(NAME):
	for obj in $(FUNCTIONS) ; do \
		gcc -Wall -Werror -Wextra -c $(SRCS)$$obj.c -o $(SRCS)$$obj.o -I includes ; \
	done
	ar rc $(NAME) $(OBJECTS);
	ranlib $(NAME);

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
