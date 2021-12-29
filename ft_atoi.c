/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:59:44 by abelache          #+#    #+#             */
/*   Updated: 2021/12/05 17:06:00 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	total;
	int	ng;

	ng = 1;
	total = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ng = ng * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (ng * total);
	}
	return (0);
}
