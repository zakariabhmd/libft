/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:07:41 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/06 23:07:49 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	zed;

	zed = ft_strlen(s) - 1;
	while (zed >= 0)
	{
		if (s[zed] == c)
			return &((char *) s)[zed];
		zed--;
	}
	return (0);
}
