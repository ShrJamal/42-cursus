# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:08:37 by jasahrao          #+#    #+#              #
#    Updated: 2022/10/08 20:34:02 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c \
			ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_bzero.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c 
OBJS	=	${SRCS:.c=.o}
INCS	=	libft.h
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra 
AR		=	ar crs
RM		=	rm -rf

.o.c:	${INCS}
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}  -I ${INCS}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS} 
	${RM} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
