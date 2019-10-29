# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhember <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 18:09:39 by flhember          #+#    #+#              #
#    Updated: 2019/10/29 16:27:32 by flhember         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMP = gcc
FLAGS = -Wall -Wextra -Werror
CC = $(COMP) $(FLAGS) -c -I $(INC_PATH)

#-------------------------------SRC------------------------------------------------

LIBFT=  ft_strlen ft_strcpy ft_strdup ft_strncpy ft_strcat ft_strncat ft_strlcat  \
		ft_putchar ft_putstr ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strcmp  \
		ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_toupper ft_tolower ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove  \
		ft_memchr ft_memcmp ft_memalloc ft_memdel ft_strnew ft_strdel ft_strclr   \
		ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ ft_swap  \
 		ft_strsub ft_strjoin ft_strtrim ft_putendl ft_putnbr ft_putnbr_fd ft_itoa \
 		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_strsplit ft_lstnew ft_lstdel  \
 		get_next_line ft_lstdelone ft_lstadd ft_lstiter ft_lstmap ft_print_list   \
		ft_str_is_lowercase ft_str_is_uppercase ft_strjoinfree

PRINTF= ft_intlen ft_lltoa ft_strnewspace ft_ultoa_base ft_ultoa_base_big ft_pow  \
		ft_free_tab_int ft_str_rev ft_strnewnull ft_clean_str ft_set_tab ft_free  \
		ft_creatlst ft_convert_param ft_get_option ft_convert_c ft_convert_s      \
		ft_convert_p ft_convert_o ft_convert_x ft_convert_u ft_convert_f ft_ftoa  \
		ft_convert_b ft_convert_percent ft_print_tab ft_convert_i_d ft_set_list	  \
		ft_get_good_size ft_put_option ft_put_option_x ft_ftoa_ldbl ft_round_f	  \
		ft_math_str ft_util_float ft_util_float_bis ft_return_null_x ft_printf	  \
		ft_put_flag_size ft_check_percent

SRC_FILES= $(LIBFT:%=%.c) $(PRINTF:%=%.c)

#-------------------------------INC------------------------------------------------

INC= ft_printf.h libft.h struct.h

#-------------------------PATH/OBJ/DEP---------------------------------------------

SRC_PATH = ./srcs/
OBJ_PATH = ./obj/
INC_PATH = ./includes/

INC_FILES = $(addprefix $(INC_PATH), $(INC))
OBJ_FILES = $(SRC_FILES:.c=.o)
	OBJ_EXEC = $(addprefix $(OBJ_PATH), $(OBJ_FILES))
DEPS=$(OBJ_FILES:%.o=%.d)

#---------------------------RULE----------------------------------------------------

all: $(NAME)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@$(CC) $< -o $@
	@echo "\033[40mCompilation of \033[1m$(notdir $<)\033[0m \033[32mdone.\033[0m"

$(NAME): $(INC_FILES) $(OBJ_PATH) $(OBJ_EXEC)
	@ar rc $(NAME) $(OBJ_EXEC)
	@ranlib $(NAME)
	@echo "\033[1m$(notdir $(NAME))\033[0m \033[32mdone.\033[0m"

clean:
	@/bin/rm -rf $(OBJ_PATH) $(DEPS)
	@echo "\033[31mObjects files of \033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
