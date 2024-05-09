# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 14:37:13 by chayashi          #+#    #+#              #
#    Updated: 2023/11/30 13:52:38 by chayashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
FLAGS		=	-Werror -Wextra -Wall 
HEADER		=	libft.h

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isalnum.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strlen.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_strlcat.c \
			ft_strdup.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_split.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_toupper.c \
			ft_tolower.c \

OBJ		= 		$(SRC:.c=.o)

all:			$(NAME)

.c.o:
			cc $(FLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)
clean: 
				rm -rf $(OBJ)

fclean:			clean
				rm -rf $(NAME)

re:			fclean all
