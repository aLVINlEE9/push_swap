/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:34:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 23:22:30 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(tdata *data)
{
	tlist	*Astack;

	Astack = data->Astack;
	rotate(Astack);
}

void	rb(tdata *data)
{
	tlist	*Bstack;
	
	Bstack = data->Bstack;
	rotate(Bstack);
}

void	rr(tdata *data)
{
	ra(data);
	rb(data);
}