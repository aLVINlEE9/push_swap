/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:31:52 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:20:37 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stack(tlist *stack)
{
	stack->count = 0;
	stack->max[0] = 0;
	stack->max[1] = 0;
	stack->max[2] = 0;
	stack->min = 0;
}

int	create_list(tlist *stack)
{
	tnode	*head;
	tnode	*tail;
	
	stack->head = (tnode *)malloc(sizeof(tnode));
	if (stack->head == NULL)
		return (exception_print("haed malloc failed"));
	stack->tail = (tnode *)malloc(sizeof(tnode));
	if (stack->tail == NULL)
		return (exception_print("tail malloc failed") && free_node(stack->head));
	head = stack->head;
	tail = stack->tail;
	head->data = 0;
	tail->data = 0;
	head->next = tail;
	head->prev = NULL;
	tail->next = NULL;
	tail->prev = head;
	return (0);
}

void	create_stack(tdatas *datas)
{
	datas->Astack = (tlist *)malloc(sizeof(tlist));
	if (datas->Astack == NULL)
		exit(exception_print("Astack malloc failed"));
	if (create_list(datas->Astack))
		exit(free_stack(datas->Astack));
	init_stack(datas->Astack);
	datas->Bstack = (tlist *)malloc(sizeof(tlist));
	if (datas->Bstack == NULL)
		exit(exception_print("Bstack malloc failed") && free_list(datas->Astack));
	if (create_list(datas->Bstack))
		exit(free_list(datas->Astack) && free_stack(datas->Bstack));
	init_stack(datas->Bstack);
}