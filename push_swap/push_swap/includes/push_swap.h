/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/05 22:59:59 by seungsle         ###   ########.fr       */
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

typedef struct sstacks{
	tlist *Astack;
	tlist *Bstack;
}	tstacks;

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

size_t	ft_strlen(const char *s);

int	exception_print(char *str);
int	exception_parsing(char *str, int size);

void	create_stack(tstacks *stks);
tnode	*create_node(int data);

int	free_list(tlist *stack);
int	free_stack(tlist *stack);
int	free_headtail(tnode *node);

int	split_to_stack(char **argv, tlist *Astack);

int	append_node(tlist *Astack, char *buf, int size);

#endif
