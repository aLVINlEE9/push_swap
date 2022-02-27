/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:05:08 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/27 18:10:24 by seungsle         ###   ########.fr       */
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

// int	check_least_actions(tlist *Astack, tlist *Bstack)
// {
	
// }

void sort(tlist *Astack, tlist *Bstack)
{
	action_pb(Astack, Bstack);
	// while()
	// if (check_least_actions(Astack, Bstack))
	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
	
	action_pb(Astack, Bstack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);

	action_rr(Astack, Bstack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
}