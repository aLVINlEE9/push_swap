/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_reverserotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:36 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 03:04:46 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int action_RRA(tlist *Stack)
{
	if (Stack->count < 3)
		return FALSE;
	reverse_rotate(Stack);
	return TRUE;
}

int action_RRB(tlist *Stack)
{
	if (Stack->count < 3)
		return FALSE;
	reverse_rotate(Stack);
	return TRUE;
}

int action_RRR(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 3 || Bstack->count < 3)
		return FALSE;
	return (action_RA(Astack) && action(Bstack));
}