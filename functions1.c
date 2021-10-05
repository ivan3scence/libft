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
	if (s)
	{
		while (n--)
		{
			*(unsigned char	*)(s++) = c;
		}
	}
	return(p);
}
