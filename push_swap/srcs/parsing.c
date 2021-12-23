/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungsle <seungsle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:44:23 by seungsle          #+#    #+#             */
/*   Updated: 2021/12/23 19:46:40 by seungsle         ###   ########.fr       */
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

char **split(char **argv)
{
    int i;
    int j;

    i = 0;
    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            if (argv[i][j++] == ' ')
                continue;
        }
    }
    return ()
}

long long **get_arr(char **splited_char)
{
    
}

int parsing(char **argv)
{
    char **splited_char;
    long long **arr;
    int idx;

    idx = count_idx(argv);
    splited_char = (char **)malloc(sizeof(char *) * (idx + 1));
    arr = (long long **)malloc(sizeof(long *) * idx);
    if (!arr || !splited_char)
        return (NULL);
    splited_char = ft_split(argv, splited_char, ' ', idx);
    arr = get_arr(splited_char);
}