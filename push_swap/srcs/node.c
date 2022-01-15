/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:03:38 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/15 14:15:22 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

tnode *createNode(int data)
{
	tnode *newNode;
	
	newNode = (tnode *)malloc(sizeof(tnode));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	return (newNode);
}

void initList(tlist *list1, tlist *list2)
{
	list1 = (tlist *)malloc(sizeof(tlist));
	list2 = (tlist *)malloc(sizeof(tlist));
	list1->head = createNode(0);
	list2->head = createNode(0);
	list1->tail = createNode(0);
	list2->tail = createNode(0);
	list1->head->next = list1->tail;
	list1->tail->prev = list1->head;
	list2->head->next = list2->tail;
	list2->tail->prev = list2->head;
	list1->count = 0;
	list2->count = 0;
	
	return ;
}

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

void initNode(tlist *list, long long *arr, int idx)
{
	int i;

	i = 0;
	while(i < idx)
		appendNode(list, arr[i++]);
}
