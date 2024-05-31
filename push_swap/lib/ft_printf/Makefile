# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 10:30:56 by chayashi          #+#    #+#              #
#    Updated: 2024/05/31 10:30:58 by chayashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I includes -I libft/includes
SOURCES = ft_printf.c ft_string.c ft_nbr.c
SRC = $(addprefix src/, $(SOURCES))
OBJS = ${SRC:.c=.o}
RM = rm -rf

${NAME} : ${OBJS}
	cd libft && $(MAKE)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	cd libft && $(MAKE) clean
	$(RM) $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
