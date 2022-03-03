# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 17:48:47 by seungsle          #+#    #+#              #
#    Updated: 2022/02/24 16:32:24 by seungsle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pushswap
CC		= gcc
CFLAG	= -Werror -Wall -Wextra
SRCS 	=	srcs/action_pushpop.c		\
			srcs/action_reverserotate.c	\
			srcs/action_rotate.c		\
			srcs/action_swap.c			\
			srcs/exception_1.c			\
			srcs/exception_2.c			\
			srcs/ft_atoi.c				\
			srcs/ft_memchr.c			\
			srcs/ft_split.c				\
			srcs/ft_strchr.c			\
			srcs/ft_strlcpy.c			\
			srcs/ft_strlen.c			\
			srcs/node.c					\
			srcs/parsing.c				\
			srcs/push_swap.c			\
			srcs/sort.c					\
			srcs/util_pushpop.c			\
			srcs/util_rotate.c			\
			srcs/util_swap.c			\

OBJS 	= ${SRCS:.c=.o}
INCLUDE	= -I./includes/

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS) $(INCLUDE) -o $(NAME)

.c.o:
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re