/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:34:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 22:19:42 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(tstacks *stks)
{
	tlist	*Astack;

	Astack = stks->Astack;
	rotate(Astack);
}

void	rb(tstacks *stks)
{
	tlist	*Bstack;
	
	Bstack = stks->Bstack;
	rotate(Bstack);
}

void	rr(tstacks *stks)
{
	ra(stks);
	rb(stks);
}