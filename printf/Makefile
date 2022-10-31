# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:34:50 by jasahrao          #+#    #+#              #
#    Updated: 2022/10/31 11:44:01 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
SRCS	=	ft_printf.c ft_printf_utils.c
OBJ_DIR	=	objs/
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
INCS	=	ft_printf.h
CC		=	cc
CFLAGS	=	#-Wall -Werror -Wextra
AR		=	ar crs
RM		=	rm -rf

$(OBJ_DIR)%.o: %.c $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

test: all
	@$(CC) main.c -o a.out -L. $(NAME) -fsanitize=address -fsanitize=undefined 
	@./a.out
