/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:20:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:05:13 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(tdatas *datas)
{
	tlist	*Astack;

	Astack = datas->Astack;
	reverse_rotate(Astack);
}

void	rrb(tdatas *datas)
{
	tlist	*Bstack;

	Bstack = datas->Bstack;
	reverse_rotate(Bstack);
}

void	rrr(tdatas *datas)
{
	rra(datas);
	rrb(datas);
}