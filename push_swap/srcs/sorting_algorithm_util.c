/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:32:35 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/11 16:32:55 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(tdata *data)
{
	tlist	*Astack;
	tnode	*now;
	
	Astack = data->Astack;
	now = Astack->head->next;
	if (now->data > now->next->data)
		sa(data);
}

void	sort_3(tdata *data)
{
	tnode	*a;
	tnode	*b;
	tnode	*c;

	a = data->Astack->head->next;
	b = a->next;
	c = b->next;
	if (a->data < b->data && b->data > c->data && c->data > a->data)
	{
		rra(data);
		sa(data);
	}
	else if (a->data > b->data && b->data > c->data && c->data < a->data)
	{
		ra(data);
		sa(data);
	}	
	else if (a->data > b->data && b->data < c->data && c->data > a->data)
		sa(data);
	else if (a->data < b->data && b->data > c->data && c->data < a->data)
		rra(data);
	else if (a->data > b->data && b->data < c->data && c->data < a->data)
		ra(data);
}