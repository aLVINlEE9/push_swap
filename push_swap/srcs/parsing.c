/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:04:20 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/06 20:09:50 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(tstacks *stks, int argc, char **argv)
{
	if (argc == 1)
		exit(exception_print("there is no input value"));
	create_stack(stks);
	if (split_to_stack(argv, stks->Astack))
		exit(free_list(stks->Astack) && free_list(stks->Bstack));
}