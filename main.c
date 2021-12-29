/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:21:03 by abelache          #+#    #+#             */
/*   Updated: 2021/12/14 17:05:26 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

int main(int argc, char *argv[])
{
	int i;
	int j;
	int *tab1;
	int *tab2;
	
	j = argc - 2;
	i = 1;
	tab1 = initab(argc - 1);
	if (!tab1)
		return (0);
	tab2 = initab(argc - 1);
	if (!tab2)
		return (0);
	if (checkarg(argv))
	{
		while (argv[i])
		{
			tab1[j] = ft_atoi(argv[i]);
			j--;
			i++;
		}
		if (vertri(tab1,argc - 2))
			return (0);
		ft_start(tab1, tab2, argc - 2);
	}
	else
		ft_putstr("Error\n");
}

void ft_start(int *taba, int *tabb, int len)
{
	int j;
	int med;
	int i;

	i = 0;
	med = ft_sort_int_tab(taba,len);
	ft_sepmed(taba, tabb, len, med);
}
int finderinf(int *taba, int len)
{
	int i;
	int	tamp;

	i = 0;
	tamp = taba[0];
	while (i < len)
	{
		if (taba[i] < tamp)
			tamp = taba[i];
		i++;
	}
	return (tamp);
}

void	finder(int	*taba, int len)
{
	int i;
	int	j;
	int	k;

	j = 0;
	i = finderinf(taba, len);
	k = len;
	if (taba[k] == i)
		return ;
	while (taba[k--] != i)
	while (taba[j] != i)
	if (j > k)
	{
		j = 0;
		while (k++ < j)
			ft_rotatea(taba, len);
	}
	else
	{
		k = 0;
		while (j++ < k)
		ft_rotatereva(taba, len);
	}
}

void    ft_trib(int *taba, int *tabb, int lena, int lenb)
{
	int med;
	int moit;
	int save;
	int	i;
	int	j;

	i = 3;
	moit = lenb / 2;
	save = moit;
	med = ft_sort_int_tab(tabb, lenb);
	while (lenb > 0)
	{
		moit = lenb / 2;
		med = ft_sort_int_tab(tabb, lenb);
		while (lenb > moit)
		{
			if (tabb[lenb] >= med)
			{
				ft_pusha(&tabb[lenb], &taba[++lena]);
				lenb--;
			}
			else
				ft_rotateb(tabb, lenb);
		}
		printf ("---------%d------------\n", lenb);
	}
	while (i < save)
	{
		j = 0;
		while (i > j++)
		{
			ft_pushb(&taba[lena], &tabb[lenb++]);
			lena--;
		}
		printf ("---------%d------------\n", lenb);
		while (lenb > moit)
		{
			if (tabb[lenb] >= med)
			{
				ft_pusha(&tabb[lenb], &taba[++lena]);
				lenb--;
			}
			else
				ft_rotateb(tabb, lenb);
		}
		i = i * 2;
	}
	samy(taba, tabb, &lena, &lenb);
	// printf (" %d %d \n", lena, lenb);
}

void	samy(int *taba, int *tabb, int *lena, int *lenb)
{
	ft_pusha(&tabb[*lenb], &taba[++*lena]);
	ft_rotatea(taba, *lena);
	ft_rotatea(taba, *lena);
}
void ft_sepmed(int *taba, int *tabb, int len, int med)
{
	int i;
	int moit;
	int	k;

	moit = len / 2;
	i = 0;
	if (len > 1)
	{
		while (i < moit)
		{
			if (taba[len] < med)
			{
				ft_pushb(&taba[len], &tabb[i++]);
				len--;
			}
			else
				ft_rotatea(taba, len);
		}
		ft_trib(taba, tabb, len, i - 1);
	}
}

void pt1 (int *taba, int *tabb, int lena, int lenb)
{
	int i;

	i = (lenb + lena) / 2;
	while (i > 0)
	{
		ft_trib(taba, tabb, lena, lenb);
	}
}