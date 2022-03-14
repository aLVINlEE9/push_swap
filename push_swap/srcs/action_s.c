/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:05:23 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(tdatas *datas)
{
	tlist	*Astack;

	Astack = datas->Astack;
	if (Astack->count > 1)
		swap(Astack);
}

void	sb(tdatas *datas)
{
	tlist	*Bstack;

	Bstack = datas->Bstack;
	if (Bstack->count > 1)
		swap(Bstack);
}

void	ss(tdatas *datas)
{
	if (datas->Astack->count > 1 && datas->Bstack->count > 1)
	{
		sa(datas);
		sb(datas);
	}
}