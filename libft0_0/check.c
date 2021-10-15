#include "libft.h"
#include <stdio.h>

int main()
{
	char	**a;
	int		i;

	i = -1;
	a = ft_split("1.1.1,1.1.", '.');
	while (a[++i])
	{
		printf("%d, %s\n", i, a[i]);
	}
}
