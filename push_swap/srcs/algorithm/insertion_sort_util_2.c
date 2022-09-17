/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort_util_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:37:41 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/17 16:38:06 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_max(t_list *stack, int data)
{
	int	i;

	i = -1;
	while (++i < 3)
	{
		if (stack->max[i] == data)
			return (1);
	}
	return (0);
}

int	pass_max_value(t_datas *datas, t_list *stack)
{
	t_node	*now;
	int		now_max;
	int		next_max;

	while (1)
	{
		now = stack->head->next;
		now_max = 0;
		if (check_max(stack, now->data))
		{
			now_max = 1;
			next_max = 0;
			if (check_max(stack, now->next->data))
				next_max = 1;
			action_exe(datas, "ra", 1, 1);
		}
		if (now_max && next_max)
			continue ;
		else
			return (1);
	}
}
