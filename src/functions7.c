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

static int	ft_razryad(int	n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_chzero(int	n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *) malloc(sizeof(char) * 2);
		if (!str)
			return (0);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return (0);
}

char	*ft_itoa(int	n)
{
	char		*str;
	long int	i;

	i = n;
	if (ft_chzero(n))
		return (ft_chzero(n));
	n = ft_razryad(n);
	str = (char *) malloc(sizeof(char) * (n + 2));
	if (!str)
		return (0);
	if (i < 0)
	{
		str[0] = '-';
		n++;
		i = -i;
	}
	str[n] = '\0';
	while (i)
	{
		str[--n] = i % 10 + '0';
		i = i / 10;
	}
	return (str);
}

void	ft_striteri(char	*s, void	(*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

void	ft_putchar_fd(char	c, int	fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
