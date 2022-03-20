/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort_util.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 23:04:30 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/20 18:30:46 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_left(t_datas *datas)
{
	t_list	*b_stack;
	t_node	*now;

	b_stack = datas->b_stack;
	now = b_stack->head->next;
	if (now->data < now->next->data)
		action_exe(datas, "sb", 1);
}

void	init_best_actions(t_datas *datas)
{
	datas->b_acts.a[0] = 0;
	datas->b_acts.b[0] = 0;
	datas->b_acts.a[1] = 0;
	datas->b_acts.b[1] = 0;
}

void	init_execute_actions(t_datas *datas)
{
	datas->exe_acts.a[0] = 0;
	datas->exe_acts.a[1] = 0;
	datas->exe_acts.b[0] = 0;
	datas->exe_acts.b[1] = 0;
	datas->exe_acts.r[0] = 0;
	datas->exe_acts.r[1] = 0;
}

void	set_execute_actions(t_datas *datas, t_exe_acts *exe_acts, int a, int b)
{
	int					a_val;
	int					b_val;

	a_val = datas->b_acts.a[a];
	b_val = datas->b_acts.b[b];
	if (a_val > b_val && exe_acts->count > a_val)
	{
		init_execute_actions(datas);
		exe_acts->count = a_val;
		exe_acts->r[a] = b_val;
		exe_acts->a[a] = a_val - b_val;
	}
	else if (a_val < b_val && exe_acts->count > b_val)
	{
		init_execute_actions(datas);
		exe_acts->count = b_val;
		exe_acts->r[a] = a_val;
		exe_acts->b[a] = b_val - a_val;
	}
	else if (a_val == b_val && exe_acts->count > a_val)
	{
		init_execute_actions(datas);
		exe_acts->count = a_val;
		exe_acts->r[a] = a_val;
	}
}

void	merge_best_actions_sub(t_datas *datas, int a, int b)
{
	int					a_val;
	int					b_val;

	a_val = datas->b_acts.a[a];
	b_val = datas->b_acts.b[b];
	if (!a ^ b)
		set_execute_actions(datas, &(datas->exe_acts), a, b);
	else if (a ^ b)
	{
		if (datas->exe_acts.count > a_val + b_val)
		{
			init_execute_actions(datas);
			datas->exe_acts.count = a_val + b_val;
			datas->exe_acts.a[a] = a_val;
			datas->exe_acts.b[b] = b_val;
		}
	}
}
