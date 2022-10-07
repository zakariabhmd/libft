/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:45:32 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/01 19:07:52 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int bache, size_t ch7al)
{
	size_t	i;
	char	*z;

	z = (unsigned char *) b;
	i = 0;
	while (i < ch7al)
	{
		z[i] = (unsigned char) bache;
		i++;
	}
	return (b);
