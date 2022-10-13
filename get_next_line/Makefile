# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:22:33 by jasahrao          #+#    #+#              #
#    Updated: 2022/10/13 11:36:20 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.c get_next_line.c get_next_line_utils.c
OBJS	=	$(SRCS:.c=.o)
INCS	=	get_next_line.h
CC		=	cc
FLAGS	=	-Wall -Werror -Wextra 
RM		=	rm -rf

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)  -I $(INCS)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
