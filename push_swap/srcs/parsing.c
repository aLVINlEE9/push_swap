/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:44:23 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/30 14:30:00 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_idx(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

void free_splited_char(char **splited_char)
{
	int i;

	i = 0;
	while(splited_char[i])
	{
		free(splited_char[i++]);
	}
	free(splited_char);
	return ;
}

long long *get_arr(char **splited_char, int *arr)
{
	int i;
	char *buf;

	i = 0;
	while (splited_char[i])
	{
		buf = splited_char[i];
		exception_checker(buf);

	}
}

int	*parsing(char **argv)
{
	char		**splited_char;
	long long	*arr;
	int			idx;

	idx = count_idx(argv);
	splited_char = (char **)malloc(sizeof(char *) * (idx + 1));
	arr = (long long *)malloc(sizeof(long) * idx);
	if (!arr || !splited_char)
		exit (1);
	splited_char = ft_split(argv, splited_char, 0, 0);
	arr = get_arr(splited_char, arr);
	free_splited_char(splited_char);
	return (arr);
}
