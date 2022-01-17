/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_pushpop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:09:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/17 13:55:09 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void appendNode(tlist *list, int data)
{
	tnode *newNode;
	
	newNode = createNode(data);
	newNode->next = list->tail;
	newNode->prev = list->head;
	list->tail->prev->next = newNode;
	list->tail->prev = newNode;
	list->count++;

	return ;
}

void push(tlist *list, int data)
{
	tnode *pushNode;

	pushNode = createNode(data);
	pushNode->next = list->head->next;
	list->head->next->prev = pushNode;
	list->head->next = pushNode;
	list->count++;

	return ;
}

int pop(tlist *list)
{
	tnode *popNode;
	int poped;
	
	popNode = list->head->next;
	poped = popNode->data;
	list->head->next = popNode->next;
	popNode->next->prev = NULL;
	popNode->next = NULL;
	free(popNode);
	list->count--;

	return poped;
}
