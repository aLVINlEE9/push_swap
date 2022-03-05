# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 17:48:47 by seungsle          #+#    #+#              #
#    Updated: 2022/03/05 23:35:37 by seungsle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pushswap
CC		= gcc
CFLAG	= -Werror -Wall -Wextra
SRCS 	=	srcs/create.c		\
			srcs/exception.c	\
			srcs/free.c		\
			srcs/node.c			\
			srcs/parsing_util.c			\
			srcs/parsing.c			\
			srcs/push_swap.c

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