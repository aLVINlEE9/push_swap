/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:34:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/15 12:21:52 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_datas *datas)
{
	t_list	*a_stack;

	a_stack = datas->a_stack;
	rotate(a_stack);
}

void	rb(t_datas *datas)
{
	t_list	*b_stack;

	b_stack = datas->b_stack;
	rotate(b_stack);
}

void	rr(t_datas *datas)
{
	ra(datas);
	rb(datas);
}
