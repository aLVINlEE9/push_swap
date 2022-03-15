/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 14:06:43 by seungsle         ###   ########.fr       */
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
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_list{
	int		count;
	int		min;
	int		max[3];
	t_node	*head;
	t_node	*tail;
}	t_list;

typedef struct s_best_actions{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
}	t_best_actions;

typedef struct s_execute_actions{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	count;
}	t_excute_actions;

typedef struct s_datas{
	t_best_actions		*acts;
	t_excute_actions	*exe_acts;
	t_list				*a_stack;
	t_list				*b_stack;
}	t_datas;

void		pa(t_datas *datas);
void		pb(t_datas *datas);
void		sa(t_datas *datas);
void		sb(t_datas *datas);
void		ss(t_datas *datas);
void		ra(t_datas *datas);
void		rb(t_datas *datas);
void		rr(t_datas *datas);
void		rra(t_datas *datas);
void		rrb(t_datas *datas);
void		rrr(t_datas *datas);

void		parsing(t_datas *datas, int argc, char **argv);

int			exception_print(char *str);
int			exception_parsing_string(char *buf);
int			exception_parsing_number(long long buf);
int			exception_parsing_sort(t_list *Astack);
int			check_sort(t_list *stack);

void		create_stack(t_datas *datas);
int			create_list(t_list *stack);

int			free_list(t_list *stack);
int			free_stack(t_list *stack);
int			free_node(t_node *node);

t_node		*create_node(int data);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
long long	ft_atol(const char *str);
int			split_to_stack(char **argv, t_list *Astack, int i);

int			append_node(t_list *Astack, char *buf, size_t size);

void		print_node(t_list *stack);

void		rotate(t_list *stack);
void		reverse_rotate(t_list *stack);
void		push_pop(t_list *push, t_list *pop);
void		swap(t_list *stack);

void		sorting_algorithm(t_datas *datas);

void		sort_2(t_datas *datas);
void		sort_3(t_datas *datas);
void		set_max_array(t_datas *datas, t_list *stack);
int			get_max_value(t_list *stack, int threshold);
void		set_min_value(t_datas *datas, t_list *stack);

#endif
