# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 12:32:42 by juliarussel       #+#    #+#              #
#    Updated: 2024/10/23 17:31:16 by julrusse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Definitons
NAME		= libftprintf.a

HEAD		= ft_printf.h

FILES		= ft_printf.c \
			  ft_words_count.c \
			  ft_numbers_count.c \

MAIN_FILE	= ./test/main.c

OBJS			= $(FILES:.c=.o)

LIBFT_DIR	= ./libft/

LIBFT		= $(LIBFT_DIR)libft.a

#Creation commands
CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= ar rcs

RM 			= rm -f

#Actions
all:		$(NAME)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(LIBFT):
			make -C $(LIBFT_DIR) all

$(NAME):	$(OBJS) $(LIBFT)
				cp $(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)

#Action commands
run:		$(NAME)
				$(CC) $(CFLAGS) $(MAIN_FILE) $(NAME)
				./a.out
clean:
			make -C $(LIBFT_DIR) clean
			$(RM) $(OBJS)

fclean:		clean
				make -C $(LIBFT_DIR) fclean
				$(RM) $(NAME)

re: 		fclean all

.PHONY:		all, clean, fclean, re, libft
