/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 20:48:59 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insertion_sort(tlist *Astack, tlist *Bstack)
{
	
}

void	simple_sort(tlist *Astack, tlist *Bstack)
{
	
}

void	sorting_algorithm(tstacks *stks)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = stks->Astack;
	Bstack = stks->Bstack;
	if (Astack->count <= 3)
		simple_sort(Astack, Bstack);
	else
		insertion_sort(Astack, Bstack);
}