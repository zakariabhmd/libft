/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:37:20 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/12 03:31:42 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	if (!dstsize)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (dstsize < d + 1)
		return (dstsize + s);
	if (dstsize > d + 1)
	{
		while (src[i] != '\0' && d + 1 + i < dstsize)
		{
			dst[d + i] = src[i];
			i++;
		}
	}
	dst[d + i] = '\0';
	return (d + s);
}
