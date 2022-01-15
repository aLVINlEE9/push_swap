/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:21:46 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 02:26:00 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(tlist *list)
{
	tnode *first;
	tnode *second;
	int temp;

	first = list->head->next;
	second = list->head->next->next;
	temp = second->data;
	second->data = first->data;
	first->data = temp;
}