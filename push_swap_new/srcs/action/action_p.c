/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:49:42 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/16 18:49:43 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/insertion_sort.h"

void	pa(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	t_list	*b_stack;
	int		i;

	a_stack = datas->a_stack;
	b_stack = datas->b_stack;
	i = -1;
	if (b_stack->count != 0)
		while (++i < cnt)
			push_pop(a_stack, b_stack);
}

void	pb(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	t_list	*b_stack;
	int		i;

	a_stack = datas->a_stack;
	b_stack = datas->b_stack;
	i = -1;
	if (a_stack->count != 0)
		while (++i < cnt)
			push_pop(b_stack, a_stack);
}
