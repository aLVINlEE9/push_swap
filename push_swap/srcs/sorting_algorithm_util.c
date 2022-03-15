/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:32:35 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:29:51 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_value(t_list *stack, int threshold)
{
	t_node	*now;
	int		tmp;

	now = stack->head->next;
	tmp = INT_MIN;
	while (now != stack->tail)
	{
		if (tmp < now->data && now->data < threshold)
			tmp = now->data;
		now = now->next;
	}
	return (tmp);
}

void	set_max_array(t_datas *datas, t_list *stack)
{
	stack->max[0] = get_max_value(stack, INT_MAX);
	stack->max[1] = get_max_value(stack, stack->max[0]);
	stack->max[2] = get_max_value(stack, stack->max[1]);
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
