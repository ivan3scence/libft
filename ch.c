#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"



int main()
{
	char **result = ft_split("  tripouille  42   ", ' ');
    
    while (*result)
    {
        printf("%s\n", *result);
        result++;
    }
	// char	**expected = (char*[6]){"split", "this", "for", "me", "!", NULL};
    // while (*result) {
    //     if (strcmp(*result, *expected)) {
    //         printf("f");         
    //     }
    //     result++;
    //     expected++;
    // }

    // printf("%s\n", ft_strtrim("", " "));
    // printf("%s\n", *tab);
    
}
