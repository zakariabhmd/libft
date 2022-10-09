/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:54:28 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/08 05:09:19 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*zed;

	if (!(zed = malloc(count * size)))
		return (0);
	ft_bzero(zed, (count * size));
	return (zed);
}
