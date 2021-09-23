/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:54:27 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/23 15:05:50 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "../includes/push_swap.h"

void push(t_dlist **node, int new_data)
{
	t_dlist *new_node;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_node)
		return (print_error("[ERROR]allocation error : malloc doesn't works\n"));
	new_node->data
}
