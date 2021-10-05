#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);

int ft_isalpha(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isdigit(int c);

size_t ft_strlen(const char *s);

int     ft_isprint(int c);

int main()
{
	//int i=-1;

	/*while (i < 129)
	{
		printf("bibl: i - %d, %d\n", i, isprint(i));
		printf("moya: i - %d, %d\n", i, ft_isprint(i));
		i++;
	}*/


	/*printf("bibl: str - %s, %ld\n", "qwerty", strlen("qwerty"));
	printf("bibl: ft_str - %s, %ld\n", "qwerty", ft_strlen("qwerty"));
	printf("bibl: str - %s, %ld\n", "123", strlen("123"));
	printf("bibl: ft_str - %s, %ld\n", "123", ft_strlen("123"));
	printf("bibl: str - %s, %ld\n", "qwe/2rty", strlen("qwe/2rty"));
	printf("bibl: ft_str - %s, %ld\n", "qwe/2rty", ft_strlen("qwe/2rty"));*/
	/*printf("bibl: str - %s, %d\n", "qwerty", strlen("qwerty"));
	printf("bibl: ft_str - %s, %d\n", "qwerty", ft_strlen("qwerty"));
	printf("bibl: str - %s, %d\n", "qwerty", strlen("qwerty"));
	printf("bibl: ft_str - %s, %d\n", "qwerty", ft_strlen("qwerty"));*/

	
	unsigned char a[10]="1234567890";
	unsigned char b[10]="1234567890";

	memset(a, 'q', 1);	
	ft_memset(b, 'q', 1);	
	printf("%s\n", a);
	printf("%s\n", a);
	

}
