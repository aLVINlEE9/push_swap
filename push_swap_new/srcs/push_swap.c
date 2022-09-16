/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:51:10 by seungsle          #+#    #+#             */
/*   Updated: 2022/09/16 18:51:12 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/insertion_sort.h"

int	main(int argc, char **argv)
{
	t_datas	datas;

	parsing(&datas, argc, argv);
	sorting_algorithm(&datas);
	return (0);
}
