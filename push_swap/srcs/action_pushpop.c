/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_pushpop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:38:12 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/17 12:57:34 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int action_pa(tlist *pop_stack, tlist *push_stack)
{
	int poped;

	if (pop_stack->count == 0)
		return FALSE;
	poped = pop(pop_stack);
	push(push_stack, poped);
	
	return TRUE;
}

int action_pb(tlist *push_stack, tlist *pop_stack)
{
	int poped;

	if (pop_stack->count == 0)
		return FALSE;
	poped = pop(pop_stack);
	push(push_stack, poped);
	
	return TRUE;
}