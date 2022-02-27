/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_pushpop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:09:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/27 18:23:12 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void appendNode(tlist *list, int data)
{
	tnode *newNode;
	
	newNode = createNode(data);
	list->tail->prev->next = newNode;
	newNode->prev = list->tail->prev;
	list->tail->prev = newNode;
	newNode->next = list->tail;
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
	pushNode->prev = list->head;
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
	popNode->next->prev = list->head;
	popNode->next = NULL;
	popNode->prev = NULL;
	free(popNode);
	list->count--;

	return poped;
}
