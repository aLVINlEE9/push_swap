/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:05:08 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/03 21:51:24 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_check(tlist *list)
{
	tnode *now;
	int	cnt;
	
	now = list->head->next;
	cnt = list->count;
	while (cnt--)
	{
		if (now->data < now->next->data)
		{
			now = now->next;
			continue ;
		}
		else
			return (1);
	}
	return (0);
}

void	check_least_actions(tlist *Astack, tlist *Bstack, tcommand *command)
{
	tnode	*Anow;
	tnode	*Bnow;
	int	i;
	int	j;

	Anow = Astack->head->next;
	Bnow = Bstack->head->next;
	i = -1;
	while(i++ < Astack->count)
	{
		j = -1;
		while(j++ < Bstack->count)
		{
			if (Anow->data < Bnow->data)

			Bnow = Bnow->next;
		}
		Anow = Anow->next;
		
	}
}

void	simple_sort(tlist *Astack, tlist *Bstack)
{
	
}

void	sort(tlist *Astack, tlist *Bstack, tcommand *command)
{
	action_pb(Astack, Bstack);
	while(sort_check(Bstack))
	{
		check_least_actions(Astack, Bstack, command);
		execute_actions(Astack, Bstack, command);
	}
}