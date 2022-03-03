/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/03/03 21:56:40 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define TRUE 1
# define FALSE 0

typedef struct scommand{
	int ra;
	int rb;
	int rr;
	int rra;
	int rrb;
	int rrr;
	int sa;
	int sb;
	int ss;
} tcommand;

typedef struct snode{
	int data;
	struct snode *prev;
	struct snode *next;
} tnode;

typedef struct slist{
	int count;
	tnode *head;
	tnode *tail;
} tlist;

#endif
