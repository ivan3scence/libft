/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:37:50 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/15 11:14:20 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*joined;
	int		i;

	if (!s1 || ! s2)
		return (0);
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

	if (!(s && f))
		return (0);
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

	if (!(s1 && set))
		return (0);
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

void	ft_putstr_fd(char	*s, int	fd)
{
	if (!s)
		return ;
	if (fd != -1)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}

void	ft_putendl_fd(char	*s, int	fd)
{
	if (!s)
		return ;
	if (fd != -1)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
