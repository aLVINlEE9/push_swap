/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2022/01/16 02:19:13 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define TRUE 1
# define FALSE 0

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

void	free_and_exit(char **buf_1, long long *buf_2);
void	free_splited_char(char **splited_char);

int	exception_print(char *str);
int	sort_check(long long *arr, int idx);
int	exception_checker_1(char *splited_char);
int	exception_checker_2(long long buf);
int	exception_checker_3(long long *buf, int idx);

void	get_arr(char **splited_char, long long *arr);
long long	*parsing(int argc, char **argv, int idx);
int	count_idx(char **argv);

void	ft_split(char **argv, char **ret, int idx, int i);
int	ft_idx(char *buf, char c);
void	ft_malloc_error(char **ret);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
long long	ft_atoi(const char *str);

tnode *createNode(int data);
tlist *initList(tlist *list);
void initNode(tlist *List, long long *arr, int idx);
void printNode(tlist *list);

void appendNode(tlist *list, int data);
void push(tlist *list, int data);
int pop(tlist *list);

void sort(tlist *Astack, tlist *Bstack);

int action_PA(tlist *pop_stack, tlist *push_stack);
int action_PB(tlist *push_stack, tlist *pop_stack);

#endif
