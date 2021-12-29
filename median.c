/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:41:57 by abelache          #+#    #+#             */
/*   Updated: 2021/12/14 15:44:45 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

static int *cpytab(int *tab,int size)
{
	int	i;
	int *t;

	i = 0;
	t = malloc(sizeof(int) * size + 1);

	if (!t)
		return (NULL);
	while (i != size)
	{
		t[i] = tab [i];
		i++;
	}
	return(t);
}

int ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	po;
    int *t;

    t = cpytab(tab, size);
	i = 0;
	po = 1;
	while (i != size - 1 && t[i])
	{
		if (t[i] > t[po])
		{
			ft_swap(&t[i], &t[po]);
			i = 0;
			po = 1;
		
		}
		i++;
		po++;
		if (t[0] > t[1])
			ft_swap(&t[0], &t[1]);
	}
	return (t[size / 2]);
}