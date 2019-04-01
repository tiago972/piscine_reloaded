# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 19:29:20 by edbaudou          #+#    #+#              #
#    Updated: 2019/02/21 11:34:11 by edbaudou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs/
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
CC = gcc
FILES = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c \
	   $(SRCS)ft_strcmp.c $(SRCS)ft_strlen.c $(SRCS)ft_swap.c
INCL = ./includes/
OBJ = $(FILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
