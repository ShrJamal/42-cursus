# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 11:58:37 by jasahrao          #+#    #+#              #
#    Updated: 2023/01/14 18:24:11 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	minitalk
SERVER	=	server
CLIENT	=	client

# Files Variables #
INCS	=	minitalk.h
SRC_S	=	server.c utils.c
SRC_C	=	client.c utils.c
OBJ_DIR	=	objs/
OBJ_S	=	$(addprefix $(OBJ_DIR), $(SRC_S:.c=.o))
OBJ_C	=	$(addprefix $(OBJ_DIR), $(SRC_C:.c=.o))

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

$(OBJ_DIR)%.o: %.c $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(SERVER): $(OBJ_S)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

$(CLIENT): $(OBJ_C)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

$(NAME): all

all: $(SERVER) $(CLIENT)

clean:
	@ $(RM) $(OBJ_DIR)
	@printf "$(_INFO) Cleaned.\n"

fclean: clean
	@ $(RM) $(CLIENT) $(SERVER)

re: fclean all
	@printf "$(_INFO) Re done.\n"

.PHONY: all clean fclean re $(CLIENT) $(SERVER)