/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:38 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/23 14:53:32 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	print_error(char *str)
{
	write(1, "\n", 1);
	write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

void vaild_arg(int argc, char **argv, t_dlist **A_node, t_dilst **B_node)
{
	int	i;
	int	num;
	long long	*num_ptr;

	i = 0;
	if (argc !=2)
		return (print_error("[ERROR]bad arguments : not one argument!\n"));
	create_node(A_node);
	create_node(B_node);
	while (argv[1][i++])
	{
		if (32 == argv[1][i])
			continue ;
		if (!(48 <= argv[1][i] && argv[1][i] <= 57) || !(argv[1][i] == 45))
			return (print_error("[ERROR]bad arguments : not number!\n"));
		else
			i += parsing_num(argv[1], i, num_ptr);
		append_node(A_node, num_ptr);
		free(num_ptr);
	}
}

int	valid_int(long long *num_ptr, char **argv, int index)
{
	*num_ptr = ft_atoi(argv[1][index]);
	if (num < INT_MIN || num > INT_MAX)
		return (FALSE);
	else
		return (TRUE);
}

int	parsing_num(char **argv, int index, long long	*num_ptr)
{
	int		i;
	int		len;
	char	*num_str;

	i = index;
	num_ptr = (long long *)malloc(sizeof(long long));
	if (!num_ptr)
		return (print_error("[ERROR]allocatin error : malloc doesn't works\n"));
	while (argv[1][index++])
	{
		if (argv[1][index] == ' ')
			break ;
		else
			continue ;
	}
	len = index - i;
	if (valid_int(num_ptr, argv, index))
		return (print_error("[ERROR]out of scope : not integer scope!\n"));
	return (len);
}

int main(int argc, char **argv)
{
	t_dlist	*A_node;
	t_dlist	*B_node;

	valid_arg(argc, argv, &A_node, &B_node);
	num_arr = parsing_num(argv);
}
