/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:16:17 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/30 14:30:10 by seungsle         ###   ########.fr       */
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

void exception_print(char *str);
void exception_checker(char *splited_char);

int	*parsing(char **argv);
int	count_idx(char **argv);

char	**ft_split(char **argv, char **ret, int idx, int i);
int	ft_idx(char *buf, char c);
char	**ft_malloc_error(char **ret);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);

#endif
