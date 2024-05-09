#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 05:28:16 by chayashi          #+#    #+#              #
#    Updated: 2024/03/29 18:05:20 by chayashi         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# **************************************************************************** #
# VARIABLES

NAME = fractol
CC = cc
HEADER = fractol.h
MLX = -Lminilibx-linux -lmlx_Linux -lX11 -lXext
CFLAGS	= -Wall -Wextra -Werror

# **************************************************************************** #
# COLORS

GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
END_COLOR	= \033[0;39m

# **************************************************************************** #
# SOURCES

SRC = events.c fractol.c fractol_utils.c ft_setup_the_env.c ft_the_sets.c ft_mapping.c ft_parce_args.c
OBJ = $(SRC:.c=.o)

# **************************************************************************** #
# RULES

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(MLX) -o $(NAME)
	@echo "$(GREEN)Fractol compiled sucessfully!$(END_COLOR)"

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -rf $(OBJ)
	@echo "$(YELLOW)Objects and dependency files cleaned.$(END_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)Fractol executable file cleaned.$(END_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME)!$(END_COLOR)"

# **************************************************************************** #
# PHONY

.PHONY: all clean fclean re
