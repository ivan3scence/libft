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
char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*joined;
	int		i;

	i = -1;
	joined = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (0);
	while (*s1)
		joined[++i] = *s1++;
	while (*s2)
		joined[++i] = *s2++;
	joined[++i] = '\0';
	return (joined);
}

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (str[++i])
		str[i] = f(i, str[i]);
	return (str);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*trimmed;
	int		i;
	int		j;
	int		n;

	i = -1;
	n = -1;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[++i]) && s1[i])
		;
	while (ft_strchr(set, s1[--j]) && s1[i])
		;
	trimmed = (char *) malloc(j - i + 2);
	if (!trimmed)
		return (0);
	while (i <= j)
		trimmed[++n] = s1[i++];
	trimmed[++n] = '\0';
	return (trimmed);
}

static int	ft_chpus(char	***array, const char	*buf)
{
	if (!*buf)
	{
		*array = (char **) malloc(sizeof(char *));
		*(array[0]) = NULL;
		return (1);
	}
	return (0);
}

static char	**ft_cleanarr(char	**array)
{
	while (*array)
	{
		free(*array);
		array++;
	}
	return (0);
}

char	**ft_split(char const	*s, char	c)
{
	char	*buf;
	// char	*sas;
	char	cc[2];
	char	**array;
	int		i[2];
	int		n;
	int		j;

	array = 0;
	if (!s)
		return (0);
	i[0] = 1;
	cc[0] = c;
	cc[1] = '\0';
	n = -1;
	j = 0;
	buf = ft_strtrim(s, cc);
	if (ft_chpus(&array, buf))
	{
		free(buf);
		return (array);
	}
	i[1] = ft_strlen(buf);
	while (*(buf + 1))
	{
		if (ft_strchr(buf + 1, c))
			buf = ft_strchr(buf + 1, c);
		else
			break ;
		if (*(buf - 1) != c)
			i[0]++;
	}
	array = (char **) malloc(sizeof(char *) * (i[0] + 1));
	buf = ft_strchr(buf, 0) - i[1];
	if (ft_strchr(buf + 1, c))
		array[0] = (char *) malloc(sizeof(char) * (ft_strchr(buf + 1, c) - buf + 1));
	else
		array[0] = (char *) malloc(sizeof(char) * (ft_strchr(buf + 1, 0) - buf + 1));
	i[0] = 0;
	while (*buf)
	{
		if (*buf != c)
			array[j][++n] = *buf;
		else if (ft_strlen(array[j]))
		{
			array[j][++n] = '\0';
			if (ft_strchr(buf + 1, c))
				array[++j] = (char *) malloc(sizeof(char) * (ft_strchr(buf + 1, c) - buf + 1));
			else
				array[++j] = (char *) malloc(sizeof(char) * (ft_strchr(buf + 1, 0) - buf + 1));
			if (!array[j])
			{
				free(buf - i[0]);
				return (ft_cleanarr(array));
			}				
			n = -1;
		}
		++i[0];
		buf++;
	}
	if (i[0] != i[1])
	{
		free(buf - i[0]);
		return 0;
	}
	free(buf - i[1]);
	array[j][++n] = '\0';
	array[++j] = 0;
	return (array);
}
