/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2021/09/14 13:43:17 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef	struct	s_dlist{
	int	data;
	struct t_dlist *next_node;
	struct t_dlist *pre_node;
}								t_dlist;

# define TRUE 1
# define FALSE 0
# include <stdlib.h>
# include <unistd.h>
#	include <limits.h>

#endif
