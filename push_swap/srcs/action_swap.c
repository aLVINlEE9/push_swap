/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:43 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 03:15:01 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int action_SA(tlist *Stack)
{
	if (Stack->count < 2)
		return FALSE;
	swap(Stack);
	return TRUE;
}

int action_SB(tlist *Stack)
{
	if (Stack->count < 2)
		return FALSE;
	swap(Stack);
	return TRUE;
}

int action_SS(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 2 || Bstack->count < 2)
		return FALSE;
	return (action_SA(Astack) && action_SB(Bstack));
}