/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotatereverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:51:41 by abelache          #+#    #+#             */
/*   Updated: 2021/12/06 13:06:15 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

void    ft_rotatereva(int *Pilea, size_t len)
{
	size_t  i;
	int     tamp;
	int     temp;

	i = 0;
	tamp = Pilea[len];
	ft_swap(&Pilea[i],&Pilea[len]);
	while (i < len)
	{
		temp = Pilea[--len];
		ft_swap(&Pilea[len], &tamp);
		tamp = temp;
	}
	int j = 0;
	// while (j < len + 1)
	// {
	// 	printf("[%d]", Pilea[j]);
	// 	j++;
	// }
	// printf("\n");
	ft_putstr ("rra\n");
}

void    ft_rotaterevb(int *Pileb, size_t len)
{
	size_t  i;
	int     tamp;
	int     temp;

	i = 0;
	tamp = Pileb[len];
	ft_swap(&Pileb[i], &Pileb[len]);
	while (i < len)
	{
		temp = Pileb[--len];
		ft_swap(&Pileb[len], &tamp);
		tamp = temp;
	}
	int j = 0;
	// while (j < len + 1)
	// {
	// 	printf("[%d]", Pileb[j]);
	// 	j++;
	// }
	// printf("\n");
	ft_putstr ("rrb\n");
}

void    ft_rotatereval(int *Pilea, int *Pileb, size_t lena, size_t lenb)
{
	size_t  i;
	int     tamp;
	int     temp;

	i = 0;
	tamp = Pilea[lena];
	ft_swap(&Pilea[i],&Pilea[lena]);
	while (i < lena)
	{
		temp = Pilea[--lena];
		ft_swap(&Pilea[lena], &tamp);
		tamp = temp;
	}
	i = 0;
	tamp = Pileb[lenb];
	ft_swap(&Pileb[i], &Pileb[lenb]);
	while (i < lenb)
	{
		temp = Pileb[--lenb];
		ft_swap(&Pileb[lenb], &tamp);
		tamp = temp;
	}
	ft_putstr("rrr\n");
}