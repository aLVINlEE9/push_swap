/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:19:13 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/03 23:13:39 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

tnode	*createNode(int data)
{
	tnode *newNode;
	
	newNode = (tnode *)malloc(sizeof(tnode));
	if (newNode == NULL)
		exit(exception_print("newNode malloc error"));
	newNode->data = 0;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}

void	initList(tlist *stack)
{	
	stack = (tlist *)malloc(sizeof(tlist));
	if (stack == NULL)
		exit(exception_print("stack malloc error"));
	stack->head = createNode(0);
	stack->tail = createNode(0);
	stack->count = 0;
	stack->head->next = stack->tail;
	stack->head = stack->tail->prev;
}

void	inputNode(tlist *stack, long long *arr, int idx)
{
	int	i;
	
	i = 0;
	while(i < idx)
		appendNode(stack, arr[i++]);
}

void	initNode(tlist *Astack, tlist *Bstack, long long *arr, int idx)
{
	initList(Astack);
	initList(Bstack);
	inputNode(Astack, arr, idx);
}