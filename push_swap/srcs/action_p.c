/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:25:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/07 14:44:18 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(tdata *data)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = data->Astack;
	Bstack = data->Bstack;
	push_pop(Astack, Bstack);
}

void	pb(tdata *data)
{
	tlist	*Astack;
	tlist	*Bstack;

	Astack = data->Astack;
	Bstack = data->Bstack;
	push_pop(Bstack, Astack);
}