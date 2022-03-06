/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:58:23 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 16:44:13 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

tnode	*create_node(int data)
{
	tnode	*newNode;
	
	newNode = (tnode *)malloc(sizeof(tnode));
	if (newNode == NULL)
		exception_print("newNode malloc failed");
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void	print_node(tlist *stack)
{
	tnode	*now;
	int	cnt;

	now = stack->head->next;
	cnt = -1;
	while (++cnt < stack->count)
	{
		printf("%d\n", now->data);
		now = now->next;
	}
}