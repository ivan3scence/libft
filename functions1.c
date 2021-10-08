/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:37:50 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/08 19:12:00 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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

size_t	ft_strlcpy(char	*restrict dst, const char *restrict src, size_t	dstsize)
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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		size;
	size_t		sl;

	size = dstsize;
	sl = ft_strlen(src) + ft_strlen(dst);
	if (ft_strlen(dst) > dstsize)
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

char	*ft_strchr(const char	*s, int	c)
{
	if (c == '\0')
		return ((char *)(&s[ft_strlen(s)]));
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}

char	*ft_strrchr(const char	*s, int c)
{
	const char	*cc;

	cc = 0;
	if (c == '\0')
		return ((char *)(&s[ft_strlen(s)]));
	while (*s)
	{
		if (*s == c)
			cc = s;
		s++;
	}
	if (cc)
		return ((char *)cc);
	else
		return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (!i || s1[i - 1]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	while (n--)
	{
		if (*(unsigned char *) s == (unsigned char) c)
			return ((void *) s);
		s++;
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *) s1 != *(unsigned char *) s2)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = (unsigned int)len;
	i = -1;
	if (!*needle)
		return ((char *) haystack);
	while (len-- && haystack[++i])
	{
		if (haystack[i] == needle[0])
		{
			if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle))
				&& i + (unsigned int)ft_strlen(needle) <= j)
				return ((char *)&haystack[i]);
		}
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	n;
	long long int	k;
	int				i;

	k = 1;
	n = 0;
	i = 0;
	while ((str[i]) && (((str[i] > 8) && (str[i] < 14)) || (str[i] == 32)))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i++] == 45)
			k = k * (-1);
	}
	while (str[i] && !(str[i] < 48 || str[i] > 57))
	{
		n = n * 10 + str[i++] - 48;
		if (n < 0)
		{
			if (k > 0)
				return (-1);
			return (0);
		}
	}
	return (n * k);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = (void *) malloc(size * count);
	if (!a)
		return (a);
	ft_memset(a, 0, count * size);
	return (a);
}

char	*ft_strdup(const char	*src)
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (a == NULL)
		return (a);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

//char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
//{
//}

