/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:05:08 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 03:15:54 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

void sort(tlist *Astack, tlist *Bstack)
{

	action_PA(Astack, Bstack);
	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
	
	action_PA(Astack, Bstack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);

	action_SS(Astack, Bstack);

	printf("--------Astack--------\n");
	printNode(Astack);

	printf("--------Bstack--------\n");
	printNode(Bstack);
}