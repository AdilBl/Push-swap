/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelache <abelache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:12:55 by abelache          #+#    #+#             */
/*   Updated: 2021/12/05 17:06:21 by abelache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push-Swap.h"

void	*ft_calloc(int nmemb, size_t size)
{
	int		byte;
	void	*ptr;

	byte = nmemb * size;
	ptr = malloc (byte);
	if (!ptr)
		return (0);
	ft_bzero(ptr, byte);
	return (ptr);
}

void	ft_bzero(void *s, int n)
{
	unsigned char	*d;
	int				i;

	d = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		(*(unsigned char *) s++) = '\0';
		i++;
	}
}