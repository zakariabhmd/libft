/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:30:52 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/04 02:38:29 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	return (dst);
}

int main()
{
	char src[50] = "bababab";
	char dst[50] = "hahahah";
	printf("befor : %s\n", dst);
	ft_memcpy(dst, src, 3);
	printf("after : %s\n", dst);
	return (0);
}
