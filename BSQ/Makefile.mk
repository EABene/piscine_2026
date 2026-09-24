# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/31 12:47:05 by spoernba          #+#    #+#              #
#    Updated: 2026/09/02 14:24:13 by bsandler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This file defines the targets -> what to build & the prerequisits ->
# what is needed. Commans must be preceded by a TAB.

NAME = bsq

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = main.o file_handling.o find_square.o ft_split.o get.o map_validator.o utils.o


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	chmod +x bsq

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

file_handling.o: file_handling.c
	$(CC) $(CFLAGS) -c file_handling.c
 
find_square.o: find_square.c
	$(CC) $(CFLAGS) -c find_square.c

ft_split.o: ft_split.c
	$(CC) $(CFLAGS) -c ft_split.c

get.o: get.c
	$(CC) $(CFLAGS) -c get.c

map_validator.o: map_validator.c
	$(CC) $(CFLAGS) -c map_validator.c

utils.o: utils.c
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f $(OBJ)

.PHONY: all clean
