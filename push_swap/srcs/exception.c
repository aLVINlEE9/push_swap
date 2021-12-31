/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:35:09 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/31 12:02:02 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

int exception_checker(char *buf)
{
	int i;

	i = 0;
	if (buf[0] == 48)
		return (exception_print("zero cannot be first place"));
	while (buf[i])
	{
		if (buf[i] < 48 || buf[i] > 57)
			return (exception_print("input value is not number"));
		if (i > 10)
			return (exception_print(""));
	}
}

int exception_print(char *str)
{
	write(1, "[Exception Occurred : ", 22);
	write(1, str, (int)ft_strlen(str));
	write(1, "]", 1);
	return (1);
}
