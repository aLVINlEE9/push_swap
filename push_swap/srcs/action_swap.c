/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:19:43 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:35:07 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int action_sa(tlist *Stack)
{
	if (Stack->count < 2)
		return FALSE;
	swap(Stack);
	return TRUE;
}

int action_sb(tlist *Stack)
{
	if (Stack->count < 2)
		return FALSE;
	swap(Stack);
	return TRUE;
}

int action_ss(tlist *Astack, tlist *Bstack)
{
	if (Astack->count < 2 || Bstack->count < 2)
		return FALSE;
	return (action_sa(Astack) && action_sb(Bstack));
}