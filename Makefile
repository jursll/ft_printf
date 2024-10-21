# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 12:32:42 by juliarussel       #+#    #+#              #
#    Updated: 2024/10/21 18:17:47 by julrusse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CFLAGS	= -Wall -Wextra -Werror -I./libft -I. #supprimer le dernier -I.
CC		= gcc

FILES	= ft_printf.c \
		  ft_words_count.c \
		  ft_numbers_count.c

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

OBJ		= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJ)

#supprimer ce bloc --------------------------------------------------------------
test: $(NAME) main.o
	$(CC) $(CFLAGS) -o test_executable main.o -L. -lftprintf -L$(LIBFT_DIR) -lft

main.o: main.c libftprintf.h
	$(CC) $(CFLAGS) -c main.c -o main.o
#supprimer ce bloc --------------------------------------------------------------

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) main.o #supprimer main.o
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean:	clean
	rm -f $(NAME) test_executable #supprimer test_executable
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all, clean, fclean, re
