# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhember <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 18:09:39 by flhember          #+#    #+#              #
#    Updated: 2018/11/23 16:17:31 by flhember         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c 	  		\
	  ft_strcpy.c 	  		\
	  ft_strdup.c 	  		\
	  ft_strncpy.c	  		\
	  ft_strcat.c	  		\
	  ft_strncat.c	  		\
	  ft_strlcat.c	 	 	\
	  ft_putchar.c	  		\
	  ft_putstr.c	  		\
	  ft_strchr.c	  		\
	  ft_strrchr.c	  		\
	  ft_strstr.c			\
	  ft_strnstr.c	  		\
	  ft_strcmp.c	  		\
	  ft_strncmp.c	  		\
	  ft_atoi.c		  		\
	  ft_isalpha.c	  		\
	  ft_isdigit.c	  		\
	  ft_isalnum.c	  		\
	  ft_isascii.c	  		\
	  ft_isprint.c	  		\
	  ft_toupper.c	  		\
	  ft_tolower.c	  		\
	  ft_memset.c	  		\
	  ft_bzero.c	  		\
	  ft_memcpy.c	  		\
	  ft_memccpy.c	  		\
	  ft_memmove.c	  		\
	  ft_memchr.c	  		\
	  ft_memcmp.c	  		\
	  ft_memalloc.c	  		\
	  ft_memdel.c	  		\
	  ft_strnew.c	  		\
	  ft_strdel.c	  		\
	  ft_strclr.c	  		\
	  ft_striter.c	  		\
	  ft_striteri.c	  		\
	  ft_strmap.c	  		\
	  ft_strmapi.c	  		\
	  ft_strequ.c	  		\
	  ft_strnequ.c	  		\
	  ft_strsub.c	  		\
	  ft_strjoin.c	  		\
	  ft_strtrim.c	  		\
	  ft_putendl.c	  		\
	  ft_putnbr.c	  		\
	  ft_putnbr_fd.c  		\
	  ft_putchar_fd.c 		\
	  ft_putstr_fd.c  		\
	  ft_putendl_fd.c 		\
	  ft_strsplit.c	  		\
	  ft_itoa.c		  		\
	  ft_lstnew.c	  		\
	  ft_lstdelone.c  		\
	  ft_lstdel.c	  		\
	  ft_lstadd.c	  		\
	  ft_lstiter.c   		\
	  ft_lstmap.c	 		\
	  ft_print_list.c		\
	  ft_swap.c		  		\
	  ft_str_is_lowercase.c	\
	  ft_str_is_uppercase.c	\
	  ft_strjoinfree.c


OBJ = $(SRC:.c=.o)

HEADER = libft.h

FLY = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o : %.c
	gcc $(FLY) -c $< -o $@ -I $(HEADER)

main:
	gcc $(FLY) $(SRC) main.c

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
