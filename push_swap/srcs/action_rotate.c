/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:35:02 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	action_ra(tlist *Stack)
{
	if (Stack->count < 2)
		return (FALSE);
	else if (Stack->count == 2)
	{
		swap(Stack);
		return (TRUE);
	}
	else if (Stack->count >= 3)
		rotate(Stack);
	return (TRUE);
}

int	action_rb(tlist *Stack)
{
	if (Stack->count < 2)
		return (FALSE);
	else if (Stack->count == 2)
	{
		swap(Stack);
		return (TRUE);
	}
	else if (Stack->count >= 3)
		rotate(Stack);
	return (TRUE);
}

int	action_rr(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 2 || Bstack->count < 2)
		return (FALSE);
	return (action_ra(Astack) && action_rb(Bstack));
}
