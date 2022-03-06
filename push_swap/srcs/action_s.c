/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:40 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 23:23:03 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(tdata *data)
{
	tlist	*Astack;

	Astack = data->Astack;
	swap(Astack);
}

void	sb(tdata *data)
{
	tlist	*Bstack;

	Bstack = data->Bstack;
	swap(Bstack);
}

void	ss(tdata *data)
{
	sa(data);
	sb(data);
}