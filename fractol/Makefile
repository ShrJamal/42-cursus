# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 11:58:37 by jasahrao          #+#    #+#              #
#    Updated: 2023/01/23 09:03:13 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	fractol

# Files Variables #
INCS	=	inc/fractol.h
SRC_DIR	=	src/
SRC 	=	main.c
OBJ_DIR	=	objs/
OBJ 	=	$(addprefix $(OBJ_DIR), $(SRC:.c=.o))

# Compiling Variables #
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

# Colors #
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

all: $(NAME)

clean:
	@ $(RM) $(OBJ_DIR)
	@printf "$(_INFO) Cleaned.\n"

fclean: clean
	@ $(RM) $(NAME)

re: fclean all
	@printf "$(_INFO) Re done.\n"

.PHONY: all clean fclean re bonus $(NAME)