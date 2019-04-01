# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edbaudou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 19:29:20 by edbaudou          #+#    #+#              #
#    Updated: 2019/02/26 11:23:23 by edbaudou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRCS = ./srcs/main.c ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	   ./srcs/ft_puterror.c
INCL = ./includes
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I $(INCL) -o $(NAME)

$(OBJ): $(INCL)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
