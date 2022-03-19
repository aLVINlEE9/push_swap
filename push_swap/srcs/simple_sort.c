/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:56:46 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/19 18:57:27 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
