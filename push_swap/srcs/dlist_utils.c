/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:54:27 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/23 16:52:59 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "../includes/push_swap.h"

void init_head(t_dlist **A_head, t_dlist **B_dlist)
{
	A_head = NULL;
	B_head = NULL;
}

void append_node(t_dlist **head_ref, int *new_data)
{
	t_dlist *new_node;
	t_dlist *temp;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_node)
		return (print_error("[ERROR]allocation error : malloc doesn't works\n"));
	new_node->data = (int)*new_data;
	new_node->next = NULL;
	new_node->prev = NULL;
	if ((*head_ref) == NULL)
	{
		*head_ref = new_node;
		temp = new_node;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
		temp = new_node;
	}
}
