/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_util.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:32:35 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/19 20:11:12 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_best_actions(t_datas *datas)
{
	t_best_actions	*b_acts;

	b_acts = datas->b_acts;
	b_acts->a[0] = -1;
	b_acts->a[1] = -1;
	b_acts->b[0] = -1;
	b_acts->b[1] = -1;
}

void	init_execute_actions(t_datas *datas)
{
	t_exe_acts	*exe_acts;

	exe_acts = datas->exe_acts;
	exe_acts->a[0] = -1;
	exe_acts->a[1] = -1;
	exe_acts->b[0] = -1;
	exe_acts->b[1] = -1;
	exe_acts->r[0] = -1;
	exe_acts->r[1] = -1;
}

void	set_execute_actions(t_datas *datas, t_exe_acts *exe_acts, int a, int b)
{
	int					a_val;
	int					b_val;

	a_val = datas->b_acts->a[a];
	b_val = datas->b_acts->b[b];
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
	t_exe_acts			*exe_acts;
	int					a_val;
	int					b_val;

	exe_acts = datas->exe_acts;
	a_val = datas->b_acts->a[a];
	b_val = datas->b_acts->b[b];
	if (!a ^ b)
		set_execute_actions(datas, exe_acts, a, b);
	else if (a ^ b)
	{
		if (exe_acts->count > a_val + b_val)
		{
			init_execute_actions(datas);
			exe_acts->count = a_val + b_val;
			exe_acts->a[a] = a_val;
			exe_acts->b[b] = b_val;
		}
	}
}

void	set_min_value(t_list *stack)
{
	t_node	*now;
	int		tmp;

	now = stack->head->next;
	tmp = INT_MAX;
	while (now != stack->tail)
	{
		if (tmp > now->data)
			tmp = now->data;
		now = now->next;
	}
	stack->min = tmp;
}
