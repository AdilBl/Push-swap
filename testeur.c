/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:24:28 by abelache          #+#    #+#             */
/*   Updated: 2021/12/14 16:34:28 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

int verinf(int *tab, int i, int len)
{ 
    int j;

    j = 0;
    while (j < len - 1)
    {
        if (tab[j] > i)
            j++;
        else
            return (0);
    }
    return (1);
}

int versup(int *tab, int i, int len)
{ 
    int j;

    j = 0;
    while (j != len - 1)
    {
        if (tab[j] < i)
            j++;
        else
            return (0);
    }
    return (1);
}

int verrinf(int *tab, int i, int len)
{

    while(len > 0)
    {
        if (tab[len] < i)
            len--;
        else
            return(0);
    }
    return (1);
}

int vertri(int *tab, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if (tab[i] > tab[i + 1])
            i++;
        else
            return (0);
    }
    // printf("trier\n");
    return (1);
}

int vertrib(int *tab, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        if(tab[i] < tab [i + 1])
            i++;
        else
            return (0);
    }
    // printf("Trierb\n");
    return (1);
}