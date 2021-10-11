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

static void	ft_op(const char	*s, char	c, char	**array, char	*buf)
{
	int		j;
	int		n;

	j = -1;
	n = -1;
	while (*s)
	{
		if (*s == c)
		{
			buf[++n] = '\0';
			if (ft_strlen(buf))
				array[++j] = buf;
			buf = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
			if (!buf)
				return ;
			n = -1;
		}
		else
			buf[++n] = *s;
		s++;
	}
	if (n != -1)
		array[++j] = buf;
	free(buf);
	array[++j] = NULL;
}

char	**ft_split(char const	*s, char	c)
{
	char	**array;
	char	*buf;

	array = (char **) malloc(sizeof(char **)
			* (ft_strlen(s) / 2 + ft_strlen(s) % 2 + 1));
	if (!array)
		return (0);
	buf = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!buf)
		return (0);
	ft_op(s, c, array, buf);
	return (array);
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
