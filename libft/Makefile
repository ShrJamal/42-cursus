# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasahrao <jasahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 10:35:02 by jasahrao          #+#    #+#              #
#    Updated: 2022/10/31 10:35:38 by jasahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c \
			ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c \
			ft_strdup.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_bzero.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BSRCS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_DIR	=	objs/
OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
BOBJS	=	$(OBJS) $(addprefix $(OBJ_DIR), $(BSRCS:.c=.o))
INCS	=	libft.h
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar crs
RM		=	rm -rf

$(OBJ_DIR)%.o: %.c $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

bonus: $(BOBJS)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

test:
	@$(CC) -fsanitize=address -fsanitize=undefined test.c -o a.out -L. $(NAME)
	@./a.out