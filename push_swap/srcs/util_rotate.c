/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:27:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/27 17:40:20 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void rotate(tlist *list)
{
	tnode *move;
	tnode *last;
	tnode *first;

	move = list->head->next;
	last = list->tail->prev;
	first = list->head->next->next;
	list->tail->prev = move;
	move->next = list->tail;
	move->prev = last;
	last->next = move;
	list->head->next = first;
	first->prev = list->head;
}

void reverse_rotate(tlist *list)
{
	tnode *move;
	tnode *last;
	tnode *first;

	move = list->tail->prev;
	last = list->tail->prev->prev;
	first = list->head->next;
	list->head->next = move;
	move->prev = list->head;
	move->next = first;
	first->prev = move;
	list->tail->prev = last;
	last->next = list->tail;
}