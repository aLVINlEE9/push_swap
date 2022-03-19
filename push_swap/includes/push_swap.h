/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/19 20:14:31 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_list{
	int		count;
	int		min;
	int		max;
	t_node	*head;
	t_node	*tail;
}	t_list;

/*
	a[0] == ra;
	a[1] == rra;
	b[0] == rb;
	b[1] == rrb;
*/

typedef struct s_best_actions{
	int	a[2];
	int	b[2];
}	t_best_actions;

/*
	a[0] == ra;
	a[1] == rra;
	b[0] == rb;
	b[1] == rrb;
	r[0] == rr;
	r[1] == rrr;
*/
typedef struct s_execute_actions{
	int	a[2];
	int	b[2];
	int	r[2];
	int	count;
}	t_exe_acts;

typedef struct s_datas{
	t_best_actions		*b_acts;
	t_exe_acts			*exe_acts;
	t_list				*a_stack;
	t_list				*b_stack;
}	t_datas;

void		pa(t_datas *datas, int cnt);
void		pb(t_datas *datas, int cnt);
void		sa(t_datas *datas, int cnt);
void		sb(t_datas *datas, int cnt);
void		ss(t_datas *datas, int cnt);
void		ra(t_datas *datas, int cnt);
void		rb(t_datas *datas, int cnt);
void		rr(t_datas *datas, int cnt);
void		rra(t_datas *datas, int cnt);
void		rrb(t_datas *datas, int cnt);
void		rrr(t_datas *datas, int cnt);

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
void		set_max_value(t_datas *datas, t_list *stack);
void		set_min_value(t_list *stack);

void		merge_best_actions_sub(t_datas *datas, int a, int b);
void		init_best_actions(t_datas *dats);
void		action_exe(t_datas *datas, char *action, int cnt);
void		init_datas(t_datas *datas);
void		exe_best_actions(t_datas *datas);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlen(const char *s);
#endif
