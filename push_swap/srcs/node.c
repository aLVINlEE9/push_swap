/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:03:38 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/25 11:20:53 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
		appendNode(list, (int)arr[i++]);
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
		printf("%d\n", now->data);
		now = now->next;
	}
	printf("\nhead : %d, ", list->head->next->data);
	printf("tail : %d, ", list->tail->prev->data);
	printf("count : %d, ", list->count);
	printf("\n");
}