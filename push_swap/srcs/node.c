/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:03:38 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/15 18:09:30 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

tnode *createNode(int data)
{
	tnode *newNode;
	
	newNode = (tnode *)malloc(sizeof(tnode));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	return (newNode);
}

tlist *initList(tlist *list)
{
	list = (tlist *)malloc(sizeof(tlist)); 
	list->head = createNode(0);
	list->tail = createNode(0);
	list->head->next = list->tail;
	list->tail->prev = list->head;
	list->count = 0;
	return list;
}

void initNode(tlist *list, long long *arr, int idx)
{
	int i;

	i = 0;
	while(i < idx)
		push(list, (int)arr[i++]);
	printNode(list);
}

void printNode(tlist *list)
{
	tnode *now;
	int cnt;
	now = list->head->next;
	cnt = list->count;
	while(cnt--)
	{
		printf("%d  ", now->data);
		now = now->next;
	}
	printf("\nhead : %d\n", list->head->next->data);
	printf("\ntail : %d\n", list->tail->prev->data);
	printf("\ncount : %d\n", list->count);
	printf("\n");
}