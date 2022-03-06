/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:04:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 23:24:42 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(tdata *data, int argc, char **argv)
{
	if (argc == 1)
		exit(exception_print("there is no input value"));
	create_stack(data);
	if (split_to_stack(argv, data->Astack))
		exit(free_list(data->Astack) && free_list(data->Bstack));
}