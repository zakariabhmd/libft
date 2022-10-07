/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:45:38 by zbabahmi          #+#    #+#             */
/*   Updated: 2022/10/07 02:26:38 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H


#include <unistd.h>
#include <stdio.h>
#include <string.h>


int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalum(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int bache, size_t ch7al);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const char *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);





#endif
