/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:25:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:21:16 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_datas *datas)
{
	t_list	*a_stack;
	t_list	*b_stack;

	a_stack = datas->a_stack;
	b_stack = datas->b_stack;
	if (b_stack->count != 0)
		push_pop(a_stack, b_stack);
}

void	pb(t_datas *datas)
{
	t_list	*a_stack;
	t_list	*b_stack;

	a_stack = datas->a_stack;
	b_stack = datas->b_stack;
	if (a_stack->count != 0)
		push_pop(b_stack, a_stack);
}
