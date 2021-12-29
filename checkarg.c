/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:04:27 by abelache          #+#    #+#             */
/*   Updated: 2021/12/01 16:11:06 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

int checkarg(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        if (argv[i][j] == '+' || (argv[i][j] == '-' && argv[i][j + 1]))
            j++;
        while (argv[i][j])
        {
            if (ft_isalnum(argv[i][j]))
                j++;
            else
                return (0);
        }
        i++;
    }
    return (1);
}