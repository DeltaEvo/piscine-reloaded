# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 15:40:43 by dde-jesu          #+#    #+#              #
#    Updated: 2018/11/05 17:15:03 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CCFLAGS=-Wall -Werror -Wextra -Iincludes -I.
SRCS = srcs/display_file.c
HEADERS = 
NAME = ft_display_file

all: $(NAME)

debug: CCFLAGS += -g
debug: $(NAME)

$(NAME): $(HEADERS) $(SRCS)
	$(CC) $(CCFLAGS) $(DCFLAGS) $(SRCS) -o $(NAME)
clean:
fclean: clean
	rm -rf ft_display_file*
re: fclean $(NAME)
