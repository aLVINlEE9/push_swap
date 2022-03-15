/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:07:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 15:58:19 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	merge_best_actions(t_datas *datas)
{
	int					rra;
	int					rrb;
	t_excute_actions	*exe_act;
	t_list				*a_stack;
	t_list				*b_stack;

	rra = ra - a_stack->count;
	rrb = rb - b_stack->count;
}

/*
Function Explanation (choose_best_actinos)

	1. while
*/

void	choose_best_actions_sub(t_datas *datas, int data)
{
	t_node			*now;
	t_best_actions	*acts;
	int				tmp;
	int				i;

	now = datas->b_stack->head->next;
	acts = datas->acts;
	tmp = INT_MIN;
	i = 0;
	while (now != datas->b_stack->tail && ++i)
	{
		if (datas->b_stack->min > data && now->data >= tmp)
		{
			tmp = now->data;
			acts->rb = i - 1;
		}
		if (datas->b_stack->min < data && now->data >= tmp && now->data < data)
		{
			tmp = now->data;
			acts->rb = i - 1;
		}
		now = now->next;
	}
	merge_best_actions(datas);
}

/*
Function Explanation (choose_best_actinos)

	1. set_min_value : get min number in b_stack (It will be 2)
	2. while -> count all command(ra, rra) to each all numbers in a_stack 
		that makes to top for PB

		-------------------------
		|			|			|
		|			|			|
		|	*	7	|			|
		|		3	|			|
		|		5	|		2	|
		|			|		9	|
		|	a_stack	|	b_stack	|
		--------------------------

		(if now->data is 7 then RA is gonna be 0 times, also RRA is gonna be 3 times)
		
		a. save RA RRA count temporary in t_best_actions struct

		b. choose_best_actions_sub : count command(rb, rrb) from b_stack
*/

void	choose_best_actions(t_datas *datas)
{
	t_list			*a_stack;
	t_node			*now;
	t_best_actions	*acts;
	int				cnt;

	a_stack = datas->a_stack;
	now = a_stack->head->next;
	acts = datas->acts;
	cnt = -1;
	set_min_value(datas, datas->b_stack);
	while (++cnt < a_stack->count)
	{
		acts->ra = cnt;
		acts->rra = a_stack->count - cnt;
		choose_best_actions_sub(datas, now->data);
		now = now->next;
	}
}

/*
Function Explanation (insertion_sort)

	1. set_max_array : get 3 max numbers in a_stack
	2. PB 2 times : move two top numbers(9, 2) in a_stack to b_stack

		-------------------------
		|			|			|
		|			|			|
		|		7	|			|
		|		3	|		2	|
		|		5	|		9	|
		|			|			|
		|	a_stack	|	b_stack	|
		--------------------------

	3. choose_best_actions : best actions make least time complexity
	
	(If RA is like 3 times and RB is like 4 times, it's totally 7 times but
	if you use this function then it merge commands effiectly and the result
	will be totally 4 times(better than 7) cause {RA 3 RB 3} -> RR 3, RB 1)
*/

void	insertion_sort(t_datas *datas)
{
	set_max_array(datas, datas->a_stack);
	pb(datas);
	pb(datas);
	choose_best_actions(datas);
}

/*
There's two stack in this sorting algorithm
		-------------------------
		|		9	|			|
		|		2	|			|
		|		7	|			|
		|		3	|			|
		|		5	|			|
		|			|			|
		|	a_stack	|	b_stack	|
		--------------------------
	using b_stack to sort numbers
*/

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
