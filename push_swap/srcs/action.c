/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:38:12 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/15 22:04:19 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void action_PA(tlist *pop_stack, tlist *push_stack)
{
	int poped;

	if (pop_stack->count == 0)
		return ;
	poped = pop(pop_stack);
	push(push_stack, poped);
}

void action_PB(tlist *push_stack, tlist *pop_stack)
{
	int poped;

	if (pop_stack->count == 0)
		return ;
	poped = pop(pop_stack);
	push(push_stack, poped);
}