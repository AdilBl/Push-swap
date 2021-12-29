/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:25:13 by abelache          #+#    #+#             */
/*   Updated: 2021/12/05 18:04:31 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

void    ft_rotatea(int *Pilea, size_t len)
{
    size_t  i;
    int     tamp;
    int     temp;

    i = 0;
    tamp = Pilea[i];
    ft_swap(&Pilea[len], &Pilea[i]);
    while (i < len)
    {
        temp = Pilea[++i];
        ft_swap(&Pilea[i], &tamp);
        tamp = temp;
    }
    ft_putstr("ra\n");
}

void    ft_rotateb(int *Pileb, size_t len)
{
    size_t  i;
    int     tamp;
    int     temp;

    i = 0;
    tamp = Pileb[i];
    ft_swap(&Pileb[len], &Pileb[i]);
    while (i < len)
    {
        temp = Pileb[++i];
        ft_swap(&Pileb[i], &tamp);
        tamp = temp;
    }
    ft_putstr("rb\n");
}

void    ft_rr(int *Pilea, int *Pileb, size_t lena , size_t lenb)
{
    size_t  i;
    int     tamp;
    int     temp;

    i = 0;
    tamp = Pilea[i];
    ft_swap(&Pilea[lena], &Pilea[i]);
    while (i < lena)
    {
        temp = Pilea[++i];
        ft_swap(&Pilea[i], &tamp);
        tamp = temp;
    }
    i = 0;
    tamp = Pileb[i];
    ft_swap(&Pileb[lenb], &Pileb[i]);
    while (i < lenb)
    {
        temp = Pileb[++i];
        ft_swap(&Pileb[i], &tamp);
        tamp = temp;
    }
    ft_putstr("rr\n");
}