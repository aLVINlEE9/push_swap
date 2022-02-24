/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:35:09 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 16:35:11 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_check(long long *arr, int idx)
{
	int	i;

	i = 0;
	while (i < idx - 1)
	{
		if (arr[i] < arr[i + 1])
		{
			i++;
			continue ;
		}
		else
			return (1);
	}
	return (0);
}

int	exception_checker_1(char *buf)
{
	int	i;

	i = 1;
	if (buf[0] == '0' && buf[1] != '\0')
		return (exception_print("zero cannot be first place"));
	else if ((buf[0] < '0' || buf[0] > '9') && buf[0] != '-')
		return (exception_print("one of input value is not a number"));
	if (buf[0] == '-')
	{
		if (buf[1] == '0')
			return (exception_print("zero cannot be first place"));
		else if (buf[1] == '\0')
			return (exception_print("one of input value is not a number"));
	}
	while (buf[i])
	{
		if (buf[i] < '0' || buf[i] > '9')
			return (exception_print("one of input value is not a number"));
		if (i > 10)
			return (exception_print("one of input value is not in \
			integer interval"));
		i++;
	}
	return (0);
}

int	exception_checker_2(long long buf)
{
	if (!(buf >= INT_MIN && buf <= INT_MAX))
		return (exception_print("one of input value is not in \
		integer interval"));
	return (0);
}

int	exception_checker_3(long long *buf, int idx)
{
	int	i;
	int	j;

	i = 1;
	if (!sort_check(buf, idx))
		return (1);
	while (i <= idx)
	{
		j = 0;
		while (j < i)
		{
			if (buf[j] == buf[i])
				return (exception_print("input values have same numbers"));
			j++;
		}
		i++;
	}
	return (0);
}

int	exception_print(char *str)
{
	write(1, "[Exception Occurred : ", 22);
	write(1, str, (int)ft_strlen(str));
	write(1, "]", 1);
	return (1);
}
