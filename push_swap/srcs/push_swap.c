/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:25:46 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/15 16:59:38 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int idx;
	long long	*arr;
	tlist *Astack;
	tlist *Bstack;

	idx = count_idx(argv);
	arr = parsing(argc, argv, idx);
	Astack = initList(Astack);
	Bstack = initList(Bstack);
	initNode(Astack, arr, idx);
	printNode(Astack);
	return (0);
}
