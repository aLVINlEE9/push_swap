/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:03:38 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/03 21:53:09 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initCommand(tcommand *command)
{
	command = (tcommand *)malloc(sizeof(tcommand));
	command->ra = 0;
	command->rb = 0;
	command->rr = 0;
	command->rra = 0;
	command->rrb = 0;
	command->rrr = 0;
	command->sa = 0;
	command->sb = 0;
	command->ss = 0;
}


tnode *createNode(int data)
{
	tnode *newNode;
	
	newNode = (tnode *)malloc(sizeof(tnode));
	if (newNode == NULL)
		return exception_print("newNode malloc failed");
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	
	return (newNode);
}

void initList(tlist *list)
{
	list = (tlist *)malloc(sizeof(tlist)); 
	list->head = createNode(0);
	list->tail = createNode(0);
	list->head->next = list->tail;
	list->tail->prev = list->head;
	list->count = 0;
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