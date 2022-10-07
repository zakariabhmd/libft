/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:37:02 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/05 22:37:19 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*zed;

	zed = (char *)s;
	while (*zed != c)
	{
		if (*zed == '\0')
		{
			return (NULL);
		}
		zed++;
	}
	return (zed);
}
