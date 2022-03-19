# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 17:48:47 by seungsle          #+#    #+#              #
#    Updated: 2022/03/19 20:06:27 by seungsle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pushswap
CC		= gcc -g
CFLAG	= -Werror -Wall -Wextra
SRCS 	=	srcs/action_exe.c				\
			srcs/action_p.c					\
			srcs/action_r.c					\
			srcs/action_rr.c				\
			srcs/action_s.c					\
			srcs/action_util.c				\
			srcs/create.c					\
			srcs/exception.c				\
			srcs/free.c						\
			srcs/node.c						\
			srcs/parsing_util.c				\
			srcs/parsing.c					\
			srcs/push_swap.c				\
			srcs/simple_sort.c				\
			srcs/sorting_algorithm_util.c	\
			srcs/sorting_algorithm.c

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