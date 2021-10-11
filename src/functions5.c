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

#include <ft_list.h>

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

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*subs;
	int		i;

	i = -1;
	subs = (char *) malloc((len + 1) * sizeof(char));
	if (!subs)
		return (0);
	while (len-- && start < (unsigned int) ft_strlen(s))
		subs[++i] = s[start++];
	subs[++i] = '\0';
	return (subs);
}
