/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:22:57 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_datas *datas)
{
	t_list	*a_stack;

	a_stack = datas->a_stack;
	if (a_stack->count > 1)
		swap(a_stack);
}

void	sb(t_datas *datas)
{
	t_list	*b_stack;

	b_stack = datas->b_stack;
	if (b_stack->count > 1)
		swap(b_stack);
}

void	ss(t_datas *datas)
{
	if (datas->a_stack->count > 1 && datas->b_stack->count > 1)
	{
		sa(datas);
		sb(datas);
	}
}
