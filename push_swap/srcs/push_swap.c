/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:38 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/13 20:26:14 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	print_error(char *str)
{
	write(1, "\n", 1);
	write(2, str, ft_strlen(str));
	return (FALSE);
}

int vaild_arg(int argc, char **argv)
{
	int	i;
	int	num;

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
			return (TRUE);
	}
}

int main(int argc, char **argv)
{
	int	**arr;

	if (!valid_arg(argc, argv))
		return (0);
	num_arr = parsing_num(argv);
}
