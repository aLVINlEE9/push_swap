/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:58:23 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/05 23:07:38 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	append_node(tlist *Astack, char *buf, int size)
{
	long long	ret;
	
	if (exception_parsing_string(buf, size))
		return (1);
	else
	{
		ret = atod(buf, size);
		if (exception_parsing_number(ret))
			return (1);
		return (0);
	}
}