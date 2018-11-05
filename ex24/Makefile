# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 16:57:06 by dde-jesu          #+#    #+#              #
#    Updated: 2018/11/05 16:57:15 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CCFLAGS=-Wall -Werror -Wextra -Iincludes
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADERS = includes/ft.h
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
NAME = libft.a

all: $(NAME)

debug: CCFLAGS += -g
debug: $(NAME)

$(NAME): $(HEADERS) $(SRCS)
	$(CC) $(CCFLAGS) $(DCFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)

