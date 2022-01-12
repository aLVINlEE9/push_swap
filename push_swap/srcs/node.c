/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:03:38 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/12 11:23:47 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

tnode *create_node(int data)
{
	tnode *newNode;
	newNode = (tnode *)malloc(sizeof(tnode));
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return (newNode);
}

void delete_node(tnode *delNode)
{
	free(delNode);
	return ;
}

tnode *append_node(tnode **head, tnode *addNode)
{
	tnode *temp;
	
	if (head == NULL)
		*head = addNode;
	else
	{
		temp = (*head);
		while(temp->next)
			;
		temp->next = addNode;
		addNode->prev = temp;
	}
}

void insert_node(tnode *current, tnode *newNode)
{
	if (current->next == NULL && current->prev == NULL)
	{
		current->next = newNode;
		newNode->prev = current;
	}
	else
	{
		if (current->next == NULL)
		{
			current->next = newNode;
			newNode->prev = current;
		}
		else
		{
			current->next->prev = newNode;
			newNode->prev = current;
			newNode->next = current->next;
			current->next = newNode;
		}
	}
}