/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:28:00 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/23 19:48:33 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_malloc_error(char **ret)
{
	int		i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

int	ft_idx(char *buf, char c)
{
	int		idx;
	char	*tmp;

	idx = 0;
	while (1)
	{
		if (!*buf)
			break ;
		if (*buf == c)
		{
			buf++;
			continue ;
		}
		tmp = ft_strchr(buf, c);
		if (!(tmp))
		{
			while (*buf++)
				;
			idx++;
			break ;
		}
		idx++;
		buf = tmp + 1;
	}
	return (idx);
}

char	**ft_split(char **argv, char **ret, char c, int idx)
{
	char	*buf;
	char	*s;
	int i;

	i = 0;
	idx = 0;
	while(argv[i])
	{
		s = argv[i];
		while (*s)
		{
			if (*s != c)
			{
				buf = (char *)s;
				while (*s && *s != c)
					s++;
				ret[idx] = (char *)malloc(sizeof(char) * (s - buf + 1) + 1);
				if (!ret[idx])
					return (ft_malloc_error(ret));
				ft_strlcpy(ret[idx++], buf, (s - buf + 1));
			}
			else
				s++;
		}
		i++;
	}
	return (ret);
}
