/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:05:08 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:36:00 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort(tlist *Astack, tlist *Bstack)
{

	action_pb(Astack, Bstack);
	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
	
	action_pb(Astack, Bstack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);

	action_ra(Astack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
}