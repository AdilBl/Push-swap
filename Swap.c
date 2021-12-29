/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:54:09 by abelache          #+#    #+#             */
/*   Updated: 2021/12/03 11:58:19 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

void    ft_swap(int *a, int *b)
{
    int	swap;

    swap = *b;
	*b = *a;
    *a = swap;
}

void	ft_swapa(int *a, int *b)
{
	int	swap;

    swap = *b;
	*b = *a;
    *a = swap;
    ft_putstr("sa\n");

}

void	ft_swapb(int *a, int *b)
{
	int	swap;

    swap = *b;
    *b = *a;
    *a = swap;
    ft_putstr("sb\n");
}

void    ft_ss(int *aa, int *ab, int *ba, int *bb)
{
    int swap;

    swap = *ab;
    *ab = *aa;
    *aa = swap;
    swap = *bb;
    *bb = *ba;
    *ba = swap;
    ft_putstr("ss\n");
}