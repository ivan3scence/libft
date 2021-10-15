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

char	*ft_strchr(const char	*s, int	c)
{
	c = c % 128;
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
	c = c % 128;
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
