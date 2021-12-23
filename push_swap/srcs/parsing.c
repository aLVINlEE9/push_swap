/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:44:23 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/23 18:36:35 by seungsle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int count_idx(char **argv)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    while(argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] == ' ')
                count++;
            j++;
        }
        count++;
        i++;
    }
    return count;
}

long long **ft_split(char **argv)
{
    int i;
    int j;

    i = 0;
    while(argv[i])
}

int parsing(char **argv)
{
    long long **splited;
    int idx;

    idx = count_idx(argv);
    splited = (long long **)malloc(sizeof(long *) * idx);
    if (!splited)
        return (NULL);
    splited = ft_split(**argv);
}