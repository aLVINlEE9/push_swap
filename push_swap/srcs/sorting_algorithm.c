/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:43:02 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	choose_best_actions_sub(tdatas *datas, int data, int ra, int rra)
{
	tlist	*Bstack;
	tnode	*now;
	tbest_actions	*acts;
	int	count;

	Bstack = datas->Bstack;
	now = Bstack->head->next;
	acts = datas->acts;
	set_min_value(datas, Bstack);
	if (Bstack->min < data)
		
}

void	choose_best_actions(tdatas *datas)
{
	tlist	*Astack;
	tnode	*now;
	int	cnt;

	Astack = datas->Astack;
	now = Astack->head->next;
	cnt = -1;
	while (++cnt < Astack->count)
	{
		choose_best_actions_sub(datas, now->data, cnt, Astack->count - cnt);
	}
}

void	insertion_sort(tdatas *datas)
{
	set_max_array(datas, datas->Astack);
	pb(datas);
	pb(datas);
	choose_best_actions(datas);
}

void	sorting_algorithm(tdatas *datas)
{
	tlist	*Astack;

	Astack = datas->Astack;
	if (Astack->count == 2)
		sort_2(datas);
	else if (Astack->count == 3)
		sort_3(datas);
	else if (Astack->count > 3)
		insertion_sort(datas);
}