/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:26:42 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/07 02:26:44 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char*	alpha;
	unsigned char*	beta;
	size_t	i;

	alpha = (unsigned char *) s1;
	beta = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (alpha[i] != beta[i])
			return (alpha[i] - beta[i]);
		i++;
	}
	return (0);
}
