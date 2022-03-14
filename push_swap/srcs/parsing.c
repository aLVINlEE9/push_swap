/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:04:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/14 18:17:22 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_datas(tdatas *datas)
{
	datas->acts->ra = 0;
	datas->acts->rb = 0;
	datas->acts->rra = 0;
	datas->acts->rrb = 0;
	datas->exe_acts->ra = 0;
	datas->exe_acts->rb = 0;
	datas->exe_acts->rr = 0;
	datas->exe_acts->rra = 0;
	datas->exe_acts->rrb = 0;
	datas->exe_acts->rrr = 0;
	datas->exe_acts->count = 0;
}

void	parsing(tdatas *datas, int argc, char **argv)
{
	if (argc == 1)
		exit(exception_print("there is no input value"));
	init_datas(datas);
	create_stack(datas);
	if (split_to_stack(argv, datas->Astack))
		exit(free_list(datas->Astack) && free_list(datas->Bstack));
}