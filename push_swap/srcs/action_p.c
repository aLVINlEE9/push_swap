/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:25:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:04:48 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(tdatas *datas)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = datas->Astack;
	Bstack = datas->Bstack;
	if (Bstack->count != 0)
		push_pop(Astack, Bstack);
}

void	pb(tdatas *datas)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = datas->Astack;
	Bstack = datas->Bstack;
	if (Astack->count != 0)
		push_pop(Bstack, Astack);
}