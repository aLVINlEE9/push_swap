/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:34:22 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:05:04 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(tdatas *datas)
{
	tlist	*Astack;

	Astack = datas->Astack;
	rotate(Astack);
}

void	rb(tdatas *datas)
{
	tlist	*Bstack;
	
	Bstack = datas->Bstack;
	rotate(Bstack);
}

void	rr(tdatas *datas)
{
	ra(datas);
	rb(datas);
}