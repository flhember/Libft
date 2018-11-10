# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhember <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 18:09:39 by flhember          #+#    #+#              #
#    Updated: 2018/11/10 20:54:00 by flhember         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c 	\
	  ft_strcpy.c 	\
	  ft_strdup.c 	\
	  ft_strncpy.c	\
	  ft_strcat.c	\
	  ft_strncat.c	\
	  ft_strlcat.c	\
	  ft_putchar.c	\
	  ft_putstr.c	\
	  ft_strchr.c	\
	  ft_strrchr.c	\
	  ft_strstr.c	\
	  ft_strnstr.c	\
	  ft_strcmp.c	\
	  ft_strncmp.c	\
	  ft_atoi.c		\
	  ft_isalpha.c	\
	  ft_isdigit.c	\
	  ft_isalnum.c	\
	  ft_isascii.c	\
	  ft_isprint.c	\
	  ft_toupper.c	\
	  ft_tolower.c	\

OBJ = $(SRC:.c=.o)

HEADER = libft.h

FLY = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLY) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

main:
	gcc $(FLY) $(SRC) main.c

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
