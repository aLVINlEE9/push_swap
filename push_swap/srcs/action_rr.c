/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:20:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:22:20 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_datas *datas)
{
	t_list	*a_stack;

	a_stack = datas->a_stack;
	reverse_rotate(a_stack);
}

void	rrb(t_datas *datas)
{
	t_list	*b_stack;

	b_stack = datas->b_stack;
	reverse_rotate(b_stack);
}

void	rrr(t_datas *datas)
{
	rra(datas);
	rrb(datas);
}
