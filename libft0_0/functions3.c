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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (src < dst)
	{
		while (len--)
		{
			*(d + len) = *(s + len);
		}
	}
	else if (src > dst)
	{
		while (len--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dst);
}

size_t	ft_strlcpy(char	*dst, const char *src, size_t	dstsize)
{
	size_t		size;
	size_t		sl;

	sl = ft_strlen(src);
	size = dstsize;
	if (dstsize == 0)
		return (sl);
	while ((dstsize - 1 > 0) && *src)
	{
		*(unsigned char *)(dst++) = *(unsigned char *)(src++);
		dstsize--;
	}
	if (size > 0)
		*(unsigned char *) dst = '\0';
	return (sl);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		size;
	size_t		sl;

	size = dstsize;
	sl = ft_strlen(src) + ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	if (dstsize == 0)
		return (sl);
	while ((dstsize - 1 > 0) && *dst)
	{
		dstsize--;
		dst++;
	}
	while (dstsize - 1 > 0 && *src)
	{
		*(unsigned char *)(dst++) = *(unsigned char *)(src++);
		dstsize--;
	}
	if (size > 0)
		*(unsigned char *) dst = '\0';
	return (sl);
}

int	ft_toupper(int	c)
{
	if (c - 32 > 64 && c - 32 < 91)
		return (c - 32);
	return (c);
}

int	ft_tolower(int	c)
{
	if (c + 32 > 96 && c + 32 < 123)
		return (c + 32);
	return (c);
}
