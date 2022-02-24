/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_reverserotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:36 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:34:53 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int action_rra(tlist *Stack)
{
	if (Stack->count < 2)
		return (FALSE);
	else if (Stack->count == 2)
	{
		swap(Stack);
		return (TRUE);
	}
	else if (Stack->count >= 3)
		reverse_rotate(Stack);
	return (TRUE);
}

int action_rrb(tlist *Stack)
{
	if (Stack->count < 2)
		return (FALSE);
	else if (Stack->count == 2)
	{
		swap(Stack);
		return (TRUE);
	}
	else if (Stack->count >= 3)
		reverse_rotate(Stack);
	return (TRUE);
}

int action_rrr(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 2 || Bstack->count < 2)
		return FALSE;
	return (action_rra(Astack) && action_rrb(Bstack));
}