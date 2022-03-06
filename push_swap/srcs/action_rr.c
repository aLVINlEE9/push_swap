/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:20:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 23:22:51 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(tdata *data)
{
	tlist	*Astack;

	Astack = data->Astack;
	reverse_rotate(Astack);
}

void	rrb(tdata *data)
{
	tlist	*Bstack;

	Bstack = data->Bstack;
	reverse_rotate(Bstack);
}

void	rrr(tdata *data)
{
	rra(data);
	rrb(data);
}