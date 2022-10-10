/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:24:42 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/10 03:58:16 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char *)s1;
	z2 = (unsigned char *)s2;
	i = 0;
	while (z1[i] != '\0' && i < n)
	{
		if (z1[i] != z2[i])
		{
			return (z1[i] - z2[i]);
		}
		i++;
	}
	if (z1[i] == '\0' && i < n)
	{
		return (z1[i] - z2[i]);
	}
	return (0);
}
