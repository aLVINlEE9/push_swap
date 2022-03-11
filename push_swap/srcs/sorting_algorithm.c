/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/11 16:48:18 by seungsle         ###   ########.fr       */
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
	tbest_actions	*Bacts;
	
	while()
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

void	sorting_algorithm(tdata *data)
{
	tlist	*Astack;

	Astack = data->Astack;
	if (Astack->count == 2)
		sort_2(data);
	else if (Astack->count == 3)
		sort_3(data);
	else if (Astack->count > 3)
		insertion_sort(data);
}