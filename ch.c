#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"


int main()
{
	char **tab = ft_split("Tripouille ", ' ');
    while (*tab)
    {
        printf("%s\n", *tab);
        tab++;
    }

}