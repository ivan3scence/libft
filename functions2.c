/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:37:50 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/11 15:18:46 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (16384);
	}
	else
	{
		return (0);
	}
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memset(void *s, int c, size_t n)
{
	void	*p;

	p = s;
	while (n--)
	{
		*(unsigned char *)(p++) = (unsigned char)c;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	if (n)
	{
		ft_memset(s, 0, n);
	}
}

void	*ft_memcpy(void * dst, const void * src, size_t n)
{
	void	*		p;
	const void	*	s;

	if (!dst && !src)
		return (dst);
	p = dst;
	s = src;
	while (n--)
	{
		*(unsigned char *)(p++) = *(unsigned char *)(s++);
	}
	return (dst);
}
