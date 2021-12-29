/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:14:40 by abelache          #+#    #+#             */
/*   Updated: 2021/12/05 17:37:49 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

void    ft_pusha(int *sb, int *sa)
{
    if (sb)
    {
        *sa = *sb;
        *sb = 0;
        int j = 0;
        ft_putstr("pa\n");
    }
}

void    ft_pushb(int *sa, int *sb)
{
    if (sa)
    {
        *sb = *sa;
        *sa = 0;
        ft_putstr("pb\n");
    }
}