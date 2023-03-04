# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 11:58:37 by jasahrao          #+#    #+#              #
#    Updated: 2023/03/04 17:50:54 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name #
NAME	=	fractol

# Files Variables #
INCS	=	src/fractol.h
SRCS 	=	src/main.c\
			src/fractals/index.c\
			src/fractals/julia.c\
			src/fractals/mandelbrot.c\
			src/fractals/burning_ship.c\
			src/fractals/celtic_mandelbrot.c\
			src/hooks/keys.c\
			src/hooks/mouse.c\
			src/utils/complex.c\
			src/utils/ft_atod.c\
			src/utils/mlx.c\
			src/utils/strings.c
OBJS 	=	$(SRCS:.c=.o)

# mlx library
MLX		= ./mlx/
OPENGL 	= -framework OpenGL -framework Appkit
MLX_LNK	= -L $(MLX) -l mlx $(OPENGL)
MLX_INC	= -I $(MLX)
MLX_LIB	= $(addprefix $(MLX), mlx.a)

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


%.o: %.c $(INCS)
	$(CC) $(CFLAGS) $(MLX_INC) -c $< -o $@ 

$(NAME): $(OBJS)
	@ cd $(MLX) && make
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX_LNK) -lm 
	@ printf "$(_SUCCESS) $@ ready.\n"

all: $(NAME)

clean:
	@ $(RM) $(OBJS)

fclean:	clean
	@ $(RM) $(NAME)

re: fclean all
	@printf "$(_INFO) Re done.\n"

.PHONY: all clean fclean re bonus