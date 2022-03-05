/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:28:00 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/05 23:00:03 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	split_to_stack(char **argv, tlist *Astack)
{
	char	*buf;
	char	*s;
	int	i;

	i = 0;
	while (argv[i])
	{
		s = argv[i];
		while (*s)
		{
			if (*s != ' ')
			{
				buf = (char *)s;
				while (*s && *s != ' ')
					s++;
				if (append_node(Astack, buf, s - buf))
					return (1);
			}
			else
				s++;
		}
		i++;
	}
	return (0);
}
