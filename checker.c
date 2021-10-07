#include <string.h>
#include <stdlib.h>
#include "ft_list.h"
#include <ctype.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);

int	ft_toupper(int	c);

char    *ft_strchr(const char   *s, int c);

char    *ft_strrchr(const char   *s, int c);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

int ft_isalpha(int c);

void    *ft_memspy(void *restrict dst, const void *restrict src, size_t n);

void	ft_bzero(void *s, size_t n);

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

	
	/*unsigned char a[10]="1234";
	unsigned char b[10]="1234";

	printf("%lu\n", sizeof(a));         // memset
	printf("%lu\n", sizeof(b));
	//printf("%lu\n", strlen(a));
	//printf("%lu\n", strlen(b));
	memset(a, 'q', 5);	
	ft_memset(b, 'q', 5);	
	printf("%s\n", a);
	printf("%s\n", b);*/



	/*int a[10]={1,2,3,4,5,6,7,8,9,9};
	int b[10]={4,4,4,4,4,4,4,4,4,4};
	int i=-1;

	i = -1;
	while (++i < 10)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	
	i = -1;
	while (++i < 10)
	{
		printf("%d", b[i]);
	}
	printf("\n");

	bzero(a, sizeof(a));
	bzero(b, sizeof(b));
	
	i = -1;
	while (++i < 10)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	i = -1;
	while (++i < 10)
	{
		printf("%d", b[i]);
	}*/

	

	/*char a[11]="12";
	char b[11]="12";
	char aa[20]="";
	char bb[20]="";

	printf("%s\n", a);
	printf("%s\n", b);

	memcpy(aa, a, sizeof(a));
	memcpy(bb, b, sizeof(b));
	
	printf("bibl: dst - %s, src - %s\n", aa, a);
	printf("moya: dst - %s, src - %s\n", bb, b);

	printf("%d", bb[9]);*/

	/*unsigned char a[11]="0123456789";
	unsigned char b[11]="0123456789";
	void	*c;
	void	*cc;

	printf("%p, %p\n", &a[3], &a[4]);
	printf ("a&b old: %s\n", a);
	//printf ("a&b old: %s\n", &a[4]);
	c = memmove (&a[4], &a[3], 3);
	cc = ft_memmove (&b[4], &b[3], 3);
	printf ("c new: %s\n", c);
	printf ("cc new: %s\n", cc);
	printf ("a new: %s\n", a);
	printf ("b new: %s\n", b);*/

	/*c = memmove (&a[3], &a[8], 2);
	cc = ft_memmove (&b[3], &b[8], 2);
	printf ("c new: %s\n", c);
	printf ("cc new: %s\n", cc);
	printf ("a new: %s\n", a);
	printf ("b new: %s\n", b);*/


	/*char	s[11]="0123456789";
	char	ss[11]="0123456789";
	char	d[11];
	char	dd[11];
	size_t	z;
	size_t	zz;

	printf("s&d old: %s, %s\n", s, d);
	z = strlcpy(d, s,  11);
	printf("s&d new: %s, %s\n", s, d);
	printf("result: %lu\n", z);
	
	printf("ss&dd old: %s, %s\n", ss, dd);
	zz = ft_strlcpy(dd, ss, 11);
	printf("ss&dd new: %s, %s\n", ss, dd);
	printf("resultttt: %lu\n", zz);*/


	/*printf("%c\n", toupper(107));
	printf("%c\n", ft_toupper(107));*/


	/*printf("%s\n", strchr("123456", '\0'));
	printf("%s\n", ft_strchr("123456", '\0'));*/


	printf("%s\n", strrchr("123456", '\0'));
	printf("%s\n", ft_strrchr("123456", '\0'));
}
