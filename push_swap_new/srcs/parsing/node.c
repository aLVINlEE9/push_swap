/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:50:59 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/16 18:52:37 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/insertion_sort.h"

void	append_node_sub(t_list *stack, t_node *new_node)
{
	stack->tail->prev->next = new_node;
	new_node->prev = stack->tail->prev;
	new_node->next = stack->tail;
	stack->tail->prev = new_node;
	stack->count++;
}

int	append_node(t_list *a_stack, char *buf, size_t size)
{
	long long	ret;
	char		sliced;
	t_node		*new_node;

	new_node = NULL;
	ft_strlcpy(&sliced, buf, size);
	if (exception_parsing_string(&sliced))
		return (1);
	else
	{
		ret = ft_atol(&sliced);
		if (exception_parsing_number(ret))
			return (1);
		else
		{
			new_node = create_node((int)ret);
			if (new_node == NULL)
				return (1);
			append_node_sub(a_stack, new_node);
		}
	}
	return (0);
}

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		exception_print("new_node malloc failed");
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}