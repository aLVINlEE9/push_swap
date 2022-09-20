/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:34:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/19 21:02:14 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	int		i;

	a_stack = datas->a_stack;
	i = -1;
	if (a_stack->count != 0)
		while (++i < cnt)
			rotate(a_stack);
}

void	rb(t_datas *datas, int cnt)
{
	t_list	*b_stack;
	int		i;

	b_stack = datas->b_stack;
	i = -1;
	if (b_stack->count != 0)
		while (++i < cnt)
			rotate(b_stack);
}

void	rr(t_datas *datas, int cnt)
{
	if (datas->a_stack->count != 0 && datas->b_stack->count != 0)
	{
		ra(datas, cnt);
		rb(datas, cnt);
	}
	
}
