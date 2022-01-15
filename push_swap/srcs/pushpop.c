/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushpop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:09:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/15 18:10:10 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(tlist *list, int data)
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

void pop(tlist *list, int data)
{
	
}