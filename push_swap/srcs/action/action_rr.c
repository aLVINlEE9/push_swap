/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:20:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/19 21:03:12 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	int		i;

	a_stack = datas->a_stack;
	i = -1;
	if (a_stack->count != 0)
		while (++i < cnt)
			reverse_rotate(a_stack);
}

void	rrb(t_datas *datas, int cnt)
{
	t_list	*b_stack;
	int		i;

	b_stack = datas->b_stack;
	i = -1;
	if (b_stack->count != 0)
		while (++i < cnt)
			reverse_rotate(b_stack);
}

void	rrr(t_datas *datas, int cnt)
{
	if (datas->a_stack->count != 0 && datas->b_stack->count != 0)
	{
		rra(datas, cnt);
		rrb(datas, cnt);
	}
}
