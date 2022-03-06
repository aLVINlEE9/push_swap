/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 22:55:40 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(tstacks *stks)
{
	tlist	*Astack;

	Astack = stks->Astack;
	swap(Astack);
}

void	sb(tstacks *stks)
{
	tlist	*Bstack;

	Bstack = stks->Bstack;
	swap(Bstack);
}

void	ss(tstacks *stks)
{
	sa(stks);
	sb(stks);
}