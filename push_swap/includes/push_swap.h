/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/07 19:49:12 by seungsle         ###   ########.fr       */
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

typedef struct s_node{
	int	data;
	struct s_node	*prev;
	struct s_node	*next;
} tnode;

typedef struct s_list{
	int	count;
	tnode	*head;
	tnode	*tail;
}	tlist;

typedef struct s_best_actions{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
}	tbest_actions;

typedef struct s_execute_actions{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	texcute_actions;

typedef struct s_data{
	void	(*function)(struct s_data *);
	tbest_actions	*Aacts;
	tbest_actions	*Bacts;
	texcute_actions	*exe_acts;
	tlist	*Astack;
	tlist	*Bstack;
}	tdata;

void	pa(tdata *data);
void	pb(tdata *data);


void	parsing(tdata *data, int argc, char **argv);

int	exception_print(char *str);
int	exception_parsing_string(char *buf);
int	exception_parsing_number(long long buf);
int	exception_parsing_sort(tlist *Astack);
int	check_sort(tlist *stack);

void	create_stack(tdata *data);
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

void	rotate(tlist *stack);
void	reverse_rotate(tlist *stack);
void	push_pop(tlist *push, tlist* pop);
void	swap(tlist *stack);

void	sorting_algorithm(tdata *data);
#endif
