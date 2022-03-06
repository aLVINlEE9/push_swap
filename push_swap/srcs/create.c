/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:31:52 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/05 22:46:21 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	create_stack(tstacks *stks)
{
	stks->Astack = (tlist *)malloc(sizeof(tlist));
	if (stks->Astack == NULL)
		exit(exception_print("Astack malloc failed"));
	if (create_list(stks->Astack))
		exit(free_stack(stks->Astack));
	stks->Bstack = (tlist *)malloc(sizeof(tlist));
	if (stks->Bstack == NULL)
		exit(exception_print("Bstack malloc failed") && free_list(stks->Astack));
	if (create_list(stks->Bstack))
		exit(free_list(stks->Astack) && free_stack(stks->Bstack));
}