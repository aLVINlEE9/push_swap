/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:32:18 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	merge_best_actions(t_datas *datas, int ra, int rb)
{
	int					rra;
	int					rrb;
	t_excute_actions	*exe_act;
	t_list				*a_stack;
	t_list				*b_stack;

	rra = ra - a_stack->count;
	rrb = rb - b_stack->count;
}

void	choose_best_actions_sub(t_datas *datas, int data, int ra)
{
	t_list			*b_stack;
	t_node			*now;
	t_best_actions	*acts;
	int				tmp;
	int				i;

	b_stack = datas->b_stack;
	now = b_stack->head->next;
	acts = datas->acts;
	tmp = INT_MIN;
	i = 0;
	while (now != b_stack->tail && ++i)
	{
		if (b_stack->min > data && now->data >= tmp)
		{
			tmp = now->data;
		}
		if (b_stack->min < data && now->data >= tmp && now->data < data)
		{
			tmp = now->data;
		}
		now = now->next;
	}
	merge_best_actions(datas, ra, rb);
}

void	choose_best_actions(t_datas *datas)
{
	t_list	*a_stack;
	t_node	*now;
	int		cnt;

	a_stack = datas->a_stack;
	now = a_stack->head->next;
	cnt = -1;
	set_min_value(datas, datas->b_stack);
	while (++cnt < a_stack->count)
	{
		choose_best_actions_sub(datas, now->data, cnt);
	}
}

void	insertion_sort(t_datas *datas)
{
	set_max_array(datas, datas->a_stack);
	pb(datas);
	pb(datas);
	choose_best_actions(datas);
}

void	sorting_algorithm(t_datas *datas)
{
	t_list	*a_stack;

	a_stack = datas->a_stack;
	if (a_stack->count == 2)
		sort_2(datas);
	else if (a_stack->count == 3)
		sort_3(datas);
	else if (a_stack->count > 3)
		insertion_sort(datas);
}
