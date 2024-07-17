# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ien-niou <ien-niou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 15:45:49 by ien-niou          #+#    #+#              #
#    Updated: 2024/07/17 11:11:24 by ien-niou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=GCC
FLAGS	= -Wall -Werror -Wextra -I./includes
AR=ar crs
RM=rm -rf
FILES 	= srcs/ft_putchar srcs/ft_strcmp \
		  srcs/ft_putstr srcs/ft_swap srcs/ft_strlen
SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
LIB=libft.a

.PHONY: all clean fclean re

all: $(LIB)

$(LIB): $(OBJ)
	@$(AR) $(LIB) $(OBJ)
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(LIB)
re: fclean all

