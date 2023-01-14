# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 11:58:37 by jasahrao          #+#    #+#              #
#    Updated: 2023/01/14 12:58:41 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	minitalk
CLIENT	=	client
SERVER	=	server

# Files Variables #
SRC_C	=	client.c
SRC_S	=	server.c
SRC_U	= 	utils.c
SRCS	= 	$(SRC_C) $(SRC_S) $(SRC_U)
OBJ_DIR	=	objs/
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
INCS	=	minitalk.h

# Compiling Variables #
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror
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

all: $(SERVER) $(CLIENT)

$(NAME): all

$(SERVER):
	@ $(CC) $(D_FLAG) $(CFLAG) $(SRC_S) $(SRC_U) -o $(SERVER)
	@printf "$(_SUCCESS) server ready.\n"

$(CLIENT):
	@ $(CC) $(D_FLAG) $(CFLAG) $(SRC_C) $(SRC_U) -o $(CLIENT)
	@printf "$(_SUCCESS) client ready.\n"


clean:
	@ $(RM) $(CLIENT) $(SERVER)
	@printf "$(_INFO) client removed.\n"
	@printf "$(_INFO) server removed.\n"

fclean:
	@ $(RM) $(CLIENT) $(SERVER)
	@printf "$(_INFO) client removed.\n"
	@printf "$(_INFO) server removed.\n"

re: fclean all

.PHONY: all client server clean fclean re bonus