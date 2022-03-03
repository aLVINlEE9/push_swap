/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:55:11 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:35:17 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_and_exit(char **buf_1, long long *buf_2)
{
	free_splited_char(buf_1);
	free(buf_2);
	exit(1);
}

void	free_splited_char(char **splited_char)
{
	int	i;

	i = 0;
	while (splited_char[i])
	{
		free(splited_char[i++]);
	}
	free(splited_char);
	return ;
}
