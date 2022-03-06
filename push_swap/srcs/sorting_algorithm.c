/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 23:43:41 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_actions(tactions *act)
{
	act->ra = 0;
	act->rb = 0;
	act->rr = 0;
	act->rra = 0;
	act->rrb = 0;
	act->rrr = 0;
}

void	choose_best_actions(tdata *data)
{
	tlist	*Astack;
	tlist	*Bstack;
	tactions	*act;

	Astack = data->Astack;
	Bstack = data->Bstack;
	act = data->actions;
	init_actions(act);
	
}

void	insertion_sort(tdata *data)
{
	
	choose_best_actions(data);
}

void	simple_sort(tdata *data)
{
	
}

void	sorting_algorithm(tdata *data)
{
	if (data->Astack->count <= 3)
		simple_sort(data);
	else
		insertion_sort(data);
}