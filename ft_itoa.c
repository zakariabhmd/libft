/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:30:28 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/22 18:45:54 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_counter(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
		i++;
	while (c != 0)
	{
		i++;
		c /= 10;
	}
	return (i);
}

void	converter(char *p, long int i, long int a)
{
	while (a != 0)
	{
		p[i] = (a % 10) + 48;
		i--;
		a /= 10;
	}
}

char	*ft_itoa(int n)
{
	long int	i;
	char		*ptr;
	long int	b;

	b = (long int)n;
	i = ft_counter(b);
	ptr = malloc(i + 1);
	if (!ptr)
		return (0);
	ptr[i] = '\0';
	i--;
	if (b == 0)
		ptr[0] = '0';
	else if (b < 0)
	{
		b *= (-1);
		ptr[0] = '-';
	}
	converter(ptr, i, b);
	return (ptr);
}
