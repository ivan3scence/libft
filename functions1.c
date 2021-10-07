/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:37:50 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/07 16:42:51 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (8);
	}
	else
	{
		return (0);
	}
}

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
	/*if (sizeof(s) < n)
	{
		return (s);
	}*/
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

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*restrict		p;
	const void	*restrict	s;

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

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t		size;
	size_t		sl;

	sl = ft_strlen(src);
	size = dstsize;
	if (dstsize == 0)
		return (sl);
	while ((dstsize - 1 > 0) && *src)
	{
		*(unsigned char *) (dst++) = *(unsigned char *) (src++);
		dstsize--;
	}
	if (size > 0)
		*(unsigned char *) dst = '\0';
	return (sl);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t		size;
	size_t		sl;

	size = dstsize;
	sl = ft_strlen(src) + ft_strlen(dst);
	if (ft_strlen(src) + ft_strlen(dst) > dstsize)
		return (ft_strlen(dst) + dstsize);	
	if (dstsize == 0)
		return (sl);
	while ((dstsize - 1 > 0) && *dst)
	{
		dstsize--;
		dst++;
	}
	while ((dstsize - 1 > 0) && *src)
	{
		*(unsigned char *) (dst++) = *(unsigned char *) (src++);
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

int    ft_tolower(int    c)
{
    if (c + 32 > 96 && c + 32 < 123)
        return (c + 32);
    return (c);
}

char    *ft_strchr(const char   *s, int c)
{
    if (c == '\0')
		return ((char	*) (&s[ft_strlen(s)]));
	while (*s)
	{
		if (*s == c)
			return ((char	*) s);
		s++;
	}
	return (0);
}

char    *ft_strrchr(const char   *s, int c)
{
    if (c == '\0')
		return ((char	*) (&s[ft_strlen(s)]));
	while (*s)
	{
		if (*s == c)
			return ((char	*) s);
		s++;
	}
	return (0);
}

