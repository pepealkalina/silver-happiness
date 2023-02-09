# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 15:13:40 by preina-g          #+#    #+#              #
#    Updated: 2023/02/09 13:09:38 by preina-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRC = main.c parse_input.c parse_input_utils.c

OBJ = $(SRC:.c=.o)

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft -s
	$(CC) $(CCFLAGS) $(OBJ) -L libft -lft -o $(NAME) -g

clean:
	@make clean -C libft -s
	rm -rf *.o

fclean:
	@make fclean -C libft -s
	rm -rf *.o $(NAME)

re: fclean all

.PHONY: fclean all clean re