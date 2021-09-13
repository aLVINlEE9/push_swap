/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:38 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/13 21:08:25 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	print_error(char *str)
{
	write(1, "\n", 1);
	write(2, str, ft_strlen(str));
	return (FALSE);
}

void	set_node(t_dlist *node, int	*num_ptr)
{
	
}

int vaild_arg(int argc, char **argv, t_dlist *A_node)
{
	int	i;
	int	num;
	int	*num_ptr;

	i = 0;
	if (argc !=2)
		return (print_error("[ERROR]bad arguments : not one argument!\n"));
	while (argv[1][i++])
	{
		if (32 != argv[1][i])
			continue;
		if (!(48 <= argv[1][i] && argv[1][i] <= 57))
			return (print_error("[ERROR]bad arguments : not number!\n"));
		else
			i += parsing_num(argv[1], i, num_ptr);
		set_node(A_node, num_ptr);
		free(num_ptr);
	}
}

int	parsing_num(char **argv, int index, int	*num_ptr)
{
	int	i;

	i = index;
	while (argv[1][index++])
	{
		if (32 != argv[1][index])
			continue;
	}
}

int main(int argc, char **argv)
{
	t_dlist	*A_node;
	t_dlist	*B_node;

	if (!valid_arg(argc, argv, A_node))
		return (0);
	num_arr = parsing_num(argv);
}
