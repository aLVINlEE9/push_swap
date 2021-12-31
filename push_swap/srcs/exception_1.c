/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:35:09 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/31 13:44:18 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int exception_checker_1(char *buf)
{
	int i;

	i = 1;
	if (buf[0] == '0')
		return (exception_print("zero cannot be first place"));
	else if ((buf[0] < '0' || buf[0] > '9') && buf[0] != '-')
		return (exception_print("input value is not number"));
	if (buf[0] == '-')
	{
		if (buf[1] == '0')
			return (exception_print("zero cannot be first place"));
		else if (buf[1] == '\0')
			return (exception_print("input value is not number"));
	}
	while (buf[i])
	{
		if (buf[i] < '0' || buf[i] > '9')
			return (exception_print("input value is not number"));
		if (i > 10)
			return (exception_print("not in integer interval"));
		i++;
	}
	return (0);
}

int exception_checker_2(long long buf)
{
	if (!(buf >= INT_MIN && buf <= INT_MAX))
		return (exception_print("not in integer interval"));
	return (0);
}

// int exception_checker_3(long long *buf)
// {
	
// }

int exception_print(char *str)
{
	write(1, "[Exception Occurred : ", 22);
	write(1, str, (int)ft_strlen(str));
	write(1, "]", 1);
	return (1);
}
