/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:37:50 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/06 18:31:30 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (sizeof(s) < n)
	{
		return (s);
	}
	if (s)
	{
		while (n--)
		{
			*(unsigned char *)(p++) = (unsigned char)c;
		}
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

void	*ft_memspy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*restrict		p;
	const void	*restrict	s;

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
	while ((dstsize - 1) && *src)
	{
		*(unsigned char *) (dst++) = *(unsigned char *) (src++);
		dstsize--;
	}
	if (size)
		*(unsigned char *) dst = '\0';
	return (sl);
}
