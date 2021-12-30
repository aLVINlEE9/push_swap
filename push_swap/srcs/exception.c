/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:35:09 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/30 14:45:05 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void exception_checker(char *splited_char)
{
	int i;

	i = 0;
	if (splited_char[0] == 48)
		exception_print("zero cannot be first place");
	while (splited_char[i])
	{
		if (splited_char[i] < 48 || splited_char[i] > 57)
			exception_print("input value is not number");
		if (i > 10)
			exception_print("")
	}
}

void exception_print(char *str)
{
	write(1, "[Exception Occurred : ", 22);
	write(1, str, (int)ft_strlen(str));
	write(1, "]", 1);
	exit(1);
}