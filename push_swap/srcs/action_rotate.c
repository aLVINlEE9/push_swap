/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 03:14:53 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int action_RA(tlist *Stack)
{
	if (Stack->count < 3)
		return FALSE;
	rotate(Stack);
	return TRUE;
}

int action_RB(tlist *Stack)
{
	if (Stack->count < 3)
		return FALSE;
	rotate(Stack);
	return TRUE;
}

int action_RR(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 3 || Bstack->count < 3)
		return FALSE;
	return (action_RA(Astack) && action_RB(Bstack));
}