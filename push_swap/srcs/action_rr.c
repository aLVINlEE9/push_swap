/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:20:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 22:24:17 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(tstacks *stks)
{
	tlist	*Astack;

	Astack = stks->Astack;
	reverse_rotate(Astack);
}

void	rrb(tstacks *stks)
{
	tlist	*Bstack;

	Bstack = stks->Bstack;
	reverse_rotate(Bstack);
}

void	rrr(tstacks *stks)
{
	rra(stks);
	rrb(stks);
}