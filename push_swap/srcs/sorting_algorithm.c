/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/07 19:56:59 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	choose_best_actions_forA(tdata *data)
{
	tbest_actions	*Aacts;
	tbest_actions	*Bacts;

	Aacts = data->Aacts;
	Bacts = data->Bacts;
}

void	choose_best_actions_forB(tdata *data)
{
	tlist	*Bstack;
	tnode	*now;
	tbest_actions	*Bacts;
	int	cnt;
	int	top;
	int	buf;

	Bstack = data->Bstack;
	now = Bstack->head->next;
	Bacts = data->Bacts;
	top = now->data;
	cnt = -1;
	while(++cnt < Bstack->count - 1)
	{
		now = now->next;
		buf = now->data;
		if (top > buf)
	}

}

void	init_actions(tbest_actions *Aact, tbest_actions *Bact)
{
	Aact->ra = 0;
	Aact->rb = 0;
	Aact->rra = 0;
	Aact->rrb = 0;
	Bact->ra = 0;
	Bact->rb = 0;
	Bact->rra = 0;
	Bact->rrb = 0;
}

void	choose_best_actions(tdata *data)
{
	init_actions(data->Aacts, data->Bacts);
	choose_best_actions_forB(data);
	choose_best_actions_forA(data);
}

void	insertion_sort(tdata *data)
{
	pb(data);
	pb(data);
	choose_best_actions(data);
}

void	simple_sort(tdata *data)
{
	tnode	*now;

	now = data->Astack->head->next;
	if (data->Astack->count == 2)
		if ()
}

void	sorting_algorithm(tdata *data)
{
	if (data->Astack->count <= 3)
		simple_sort(data);
	else
		insertion_sort(data);
}