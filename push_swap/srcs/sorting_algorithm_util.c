/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:32:35 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/19 18:48:08 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_execute_actions(t_datas *datas, int a, int b)
{
	t_excute_actions	*exe_acts;
	int					a_val;
	int					b_val;

	exe_acts = datas->exe_acts;
	a_val = datas->b_acts->a[a];
	b_val = datas->b_acts->b[b];
	if (a_val > b_val && exe_acts->count > a_val)
	{
		exe_acts->count = a_val;
		exe_acts->r[a] = b_val;
		exe_acts->a[a] = a_val - b_val;
	}
	else if (a_val < b_val && exe_acts->count > b_val)
	{
		exe_acts->count = b_val;
		exe_acts->r[a] = a_val;
		exe_acts->b[a] = b_val - a_val;
	}
	else if (a_val == b_val && exe_acts->count > a_val)
	{
		exe_acts->count = a_val;
		exe_acts->r[a] = a_val;
	}
}

void	merge_best_actions_sub(t_datas *datas, int a, int b)
{
	t_excute_actions	*exe_acts;
	int					a_val;
	int					b_val;

	exe_acts = datas->exe_acts;
	a_val = datas->b_acts->a[a];
	b_val = datas->b_acts->b[b];
	if (!a ^ b)
		set_execute_actions(datas, a, b);
	else if (a ^ b)
	{
		if (exe_acts->count > a_val + b_val)
		{
			exe_acts->count = a_val + b_val;
			exe_acts->a[a] = a_val;
			exe_acts->b[b] = b_val;
		}
	}
}

void	set_min_value(t_datas *datas, t_list *stack)
{
	t_node	*now;
	int		tmp;

	now = stack->head->next;
	tmp = INT_MAX;
	while (now != stack->tail)
	{
		if (tmp > now->data)
			tmp = now->data;
		now = now->next;
	}
	stack->min = tmp;
}

void	sort_2(t_datas *datas)
{
	t_list	*a_stack;
	t_node	*now;

	a_stack = datas->a_stack;
	now = a_stack->head->next;
	if (now->data > now->next->data)
		sa(datas);
}

void	sort_3(t_datas *datas)
{
	t_node	*a;
	t_node	*b;
	t_node	*c;

	a = datas->a_stack->head->next;
	b = a->next;
	c = b->next;
	if (a->data < b->data && b->data > c->data && c->data > a->data)
	{
		rra(datas);
		sa(datas);
	}
	else if (a->data > b->data && b->data > c->data && c->data < a->data)
	{
		ra(datas);
		sa(datas);
	}	
	else if (a->data > b->data && b->data < c->data && c->data > a->data)
		sa(datas);
	else if (a->data < b->data && b->data > c->data && c->data < a->data)
		rra(datas);
	else if (a->data > b->data && b->data < c->data && c->data < a->data)
		ra(datas);
}
