/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/31 14:36:41 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# define TRUE 1
# define FALSE 0

typedef struct s_node	t_node;
struct	s_node
{
	int	value;
	t_node	*prev;
	t_node	*next;
};

void free_and_exit(char **buf_1, long long *buf_2);
void free_splited_char(char **splited_char);

int exception_print(char *str);
int sort_check(long long *arr, int idx);
int exception_checker_1(char *splited_char);
int exception_checker_2(long long buf);
int exception_checker_3(long long *buf, int idx);

void	get_arr(char **splited_char, long long *arr);
long long	*parsing(char **argv);
int	count_idx(char **argv);

void	ft_split(char **argv, char **ret, int idx, int i);
int	ft_idx(char *buf, char c);
void	ft_malloc_error(char **ret);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
long long	ft_atoi(const char *str);

#endif
