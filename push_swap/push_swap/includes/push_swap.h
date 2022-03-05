/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 01:10:57 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define TRUE 1
# define FALSE 0

typedef struct snode{
	int data;
	struct snode *prev;
	struct snode *next;
} tnode;

typedef struct slist{
	int count;
	tnode *head;
	tnode *tail;
} tlist;

typedef struct sstacks{
	tlist *Astack;
	tlist *Bstack;
}	tstacks;

void	parsing(tstacks *stks, int argc, char **argv);

int	exception_print(char *str);
int	exception_parsing_string(char *buf);
int	exception_parsing_number(long long buf);
int	exception_parsing_sort(tlist *Astack);
int	check_sort(tlist *stack);

void	create_stack(tstacks *stks);
int	create_list(tlist *stack);

int	free_list(tlist *stack);
int	free_stack(tlist *stack);
int	free_node(tnode *node);

tnode	*create_node(int data);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
long long	ft_atol(const char *str);
int	split_to_stack(char **argv, tlist *Astack);

int	append_node(tlist *Astack, char *buf, size_t size);

void	print_node(tlist *stack);

#endif
