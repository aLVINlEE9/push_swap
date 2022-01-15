/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:27:24 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 02:45:22 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(tlist *list)
{
	tnode *move;
	tnode *last;
	tnode *first;

	move = list->head->next;
	last = list->tail->prev;
	first = list->head->next->next;
	list->tail->prev = move;
	move->next = NULL;
	move->prev = last;
	last->next = move;
	list->head->next = first;
	first->prev = NULL;
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
	move->prev = NULL;
	move->next == first;
	first->prev = move;
	list->tail->prev = last;
	last->next = NULL;
}