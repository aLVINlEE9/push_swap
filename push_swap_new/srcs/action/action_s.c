/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:49:56 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/16 18:49:58 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/insertion_sort.h"

void	sa(t_datas *datas, int cnt)
{
	t_list	*a_stack;
	int		i;

	a_stack = datas->a_stack;
	i = -1;
	if (a_stack->count > 1)
		while (++i < cnt)
			swap(a_stack);
}

void	sb(t_datas *datas, int cnt)
{
	t_list	*b_stack;
	int		i;

	b_stack = datas->b_stack;
	i = -1;
	if (b_stack->count > 1)
		while (++i < cnt)
			swap(b_stack);
}

void	ss(t_datas *datas, int cnt)
{
	if (datas->a_stack->count > 1 && datas->b_stack->count > 1)
	{
		sa(datas, cnt);
		sb(datas, cnt);
	}
}
