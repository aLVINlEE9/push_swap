/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:14:18 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/20 17:27:34 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sort(t_list *a_stack)
{
	t_node		*now;
	long long	tmp;

	tmp = (long long)INT_MIN - 1;
	now = a_stack->head->next;
	while (now != a_stack->tail)
	{
		if (tmp < now->data)
			tmp = now->data;
		else
			return (0);
		now = now->next;
	}
	return (1);
}

int	is_action(char *action)
{
	if (ft_strncmp(action, "sa", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "sb", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "ss", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "pa", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "pb", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "ra", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "rb", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "rr", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "rra", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "rrb", ft_strlen(action)) == 0 || \
	ft_strncmp(action, "rrr", ft_strlen(action)) == 0)
		return (1);
	return (0);
}

void	checker(t_datas *datas)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line, 1) > 0)
	{
		if (!is_action(line))
		{
			write(1, "[Exception Occurred : not allowed action]\n", 42);
			return ;
		}
		action_exe(datas, line, 1, 0);
		free(line);
	}
	free(line);
	if (is_sort(datas->a_stack))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_datas	datas;

	parsing(&datas, argc, argv, 1);
	checker(&datas);
}
