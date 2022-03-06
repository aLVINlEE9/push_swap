/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:25:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 22:46:45 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(tstacks *stks)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = stks->Astack;
	Bstack = stks->Bstack;
	push_pop(Bstack, Astack);
}

void	pb(tstacks *stks)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = stks->Astack;
	Bstack = stks->Bstack;
	push_pop(Astack, Bstack);
}