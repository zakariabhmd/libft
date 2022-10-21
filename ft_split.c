/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:11:18 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/20 16:27:50 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(const char *tpm, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*tpm)
	{
		if (*tpm != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*tpm == c)
			count = 0;
		tpm++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	b;
	int		index;
	char	**sp;

	sp = (char **)malloc((counter(s, c) + 1) * (sizeof(char *)));
	if (!sp)
		return (0);
	i = 0;
	b = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			sp[b] = ft_substr(s, index, i);
			index = -1;
			b++;
		}
		i++;
	}
	sp[b] = 0;
	return (sp);
}
