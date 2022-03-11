/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/11 15:41:43 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(tdata *data)
{
	tlist	*Astack;

	Astack = data->Astack;
	if (Astack->count > 1)
		swap(Astack);
}

void	sb(tdata *data)
{
	tlist	*Bstack;

	Bstack = data->Bstack;
	if (Bstack->count > 1)
		swap(Bstack);
}

void	ss(tdata *data)
{
	if (data->Astack->count > 1 && data->Bstack->count > 1)
	{
		sa(data);
		sb(data);
	}
}