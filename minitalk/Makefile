# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 11:58:37 by jasahrao          #+#    #+#              #
#    Updated: 2023/01/19 18:04:36 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	minitalk
SERVER	=	server
CLIENT	=	client
SERVER_BONUS	=	server_bonus
CLIENT_BONUS	=	client_bonus

# Files Variables #
INCS	=	minitalk.h
SRC_S	=	server.c utils.c
SRC_C	=	client.c utils.c
SRC_S_B	=	server_bonus.c utils.c
SRC_C_B	=	client_bonus.c utils.c
OBJ_DIR	=	objs/
OBJ_S	=	$(addprefix $(OBJ_DIR), $(SRC_S:.c=.o))
OBJ_C	=	$(addprefix $(OBJ_DIR), $(SRC_C:.c=.o))
OBJ_S_B	=	$(addprefix $(OBJ_DIR), $(SRC_S_B:.c=.o))
OBJ_C_B	=	$(addprefix $(OBJ_DIR), $(SRC_C_B:.c=.o))

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


all: $(SERVER) $(CLIENT)

$(NAME): all

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

$(SERVER): $(OBJ_S)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

$(CLIENT): $(OBJ_C)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

$(SERVER_BONUS): $(OBJ_S_B)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

$(CLIENT_BONUS): $(OBJ_C_B)
	@$(CC) $(CFLAGS) $^ -o $@
	@printf "$(_SUCCESS) $@ ready.\n"

clean:
	@ $(RM) $(OBJ_DIR)
	@printf "$(_INFO) Cleaned.\n"

fclean: clean
	@ $(RM) $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)

re: fclean all
	@printf "$(_INFO) Re done.\n"

.PHONY: all clean fclean re bonus $(CLIENT) $(SERVER) $(CLIENT_BONUS) $(SERVER_BONUS)