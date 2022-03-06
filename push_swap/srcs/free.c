/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:52:46 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/05 23:37:00 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	free_list(tlist *stack)
{
	tnode	*now;
	tnode	*tmp;

	now = stack->head;
	while(now != NULL)
	{
		tmp = now;
		free(tmp);
		now = now->next;
	}
	free(stack);
	return (1);
}

int	free_stack(tlist *stack)
{
	free(stack);
	return (1);
}

int	free_node(tnode *node)
{
	free(node);
	return (1);
}