/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:25:46 by seungsle          #+#    #+#             */
/*   Updated: 2022/02/24 17:21:05 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int idx;
	long long	*arr;
	tlist *Astack;
	tlist *Bstack;

	Astack = NULL;
	Bstack = NULL;
	idx = count_idx(argv);
	printf("%d\n", idx);
	arr = parsing(argc, argv, idx);
	Astack = initList(Astack);
	Bstack = initList(Bstack);
	initNode(Astack, arr, idx);
	sort(Astack, Bstack);
	return (0);
}
