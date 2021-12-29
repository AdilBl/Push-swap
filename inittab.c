/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inittab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:05:50 by abelache          #+#    #+#             */
/*   Updated: 2021/12/01 11:18:02 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

int *initab(size_t len)
{
    int *tab;

    tab = ft_calloc(sizeof(int), len);
    if (!tab)
        return (NULL);
    return (tab);
}

void    freetab(int *taba, int *tabb)
{
    free(taba);
    free(tabb);
}