#include <string.h>
#include <stdlib.h>
#include "ft_list.h"
#include <ctype.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>

t_list *ft_lstnew(void *content);

int ft_lstsize(t_list *lst);

void ft_lstadd_front(t_list **lst, t_list *new);

t_list *ft_lstlast(t_list *lst);

void ft_lstadd_back(t_list **lst, t_list *new);

void ft_lstdelone(t_list *lst, void (*del)(void	*));

void ft_lstclear(t_list **lst, void (*del)(void	*));

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void *ft_memset(void *s, int c, size_t n);

char *ft_itoa(int n);

void	ft_striteri(char	*s, void (*f)(unsigned int, char*));

void ft_putendl_fd(char *s, int fd);

void ft_putstr_fd(char *s, int fd);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char *ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_calloc(size_t count, size_t size);

char *ft_strjoin(char const *s1, char const *s2);

char	*ft_strdup(const char	*src);

char **ft_split(char const *s, char c);

char *ft_strtrim(char const *s1, char const *set);

int	ft_toupper(int	c);

int	ft_atoi(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

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


char	ft_prikol(unsigned int	i, char	c)
{
	return(c + i);
}	

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


	//printf("%s\n", strrchr("123436", '3'));
	//printf("%s\n", ft_strrchr("123436", '3'));
	

	//printf("%d\n", strncmp("12345", "1234567", 4));
	//printf("%d\n", ft_strncmp("12345", "1234567", 4));


	
	//char	a[11]="0123456789";
	//char	b[11]="0123456789";
	//void	*aa=&a;
	//void	*bb=&b;

	//printf("%s\n", memchr(aa, 51, 11));
	//printf("%s\n", ft_memchr(bb, 51, 11));


	//char	a[11]="0123356789";
	//char	b[11]="0123456789";
	//void	*aa=&a;
	//void	*bb=&b;

	//printf("%d\n", memcmp(aa, NULL, 11));
	//printf("%d\n", ft_memcmp(aa, NULL, 11));

	
	//printf("%s\n", strnstr("0123456789", "45", 11));
	//printf("%s\n", ft_strnstr("0123456789", "45", 11));


	//printf("%d\n", atoi("9223372036888854775809"));
	//printf("%d\n", ft_atoi("9223378882036854775809"));


	//char	*a;
	//char	*aa;
	//int	i=-1;

	//a = (char	*) calloc(4, 0);
	//aa =(char	*) ft_calloc(4, 0);
	//while (++i < 4)
	//{
	//	printf("a:%d, %lu\n", *a, sizeof(*a));
	//	a++;
	//}
	//i = -1;
	//while (++i < 4)
	//{
	//	printf("aa:%d, %lu\n", *aa, sizeof(*aa));
	//	aa++;
	//}
	//free(a-4);
	//free(aa-4);

	//int	size=8539;
	//void * d1 = ft_calloc(size, sizeof(int));
	//void * d2 = calloc(size, sizeof(int));
	//printf("%d\n", memcmp(d1, d2, size*sizeof(int)));

	
	//char *src = "aaa";
	//char dst1[20];
	//char dst2[20];
	//int ret1;
	//int ret2;
	//printf("%lu\n", strlen(dst1));

	//ret2 = ft_strlcat(dst2, src, 20);
	//ret1 = strlcat(dst1, src, 20);
	//printf("ret1:%d\n", ret1);
	//printf("ret2:%d\n", ret2);

	//char	s1[4] = "";
	//char	s2[4] = "";
	//int	r2;
	//int	r1;
	//r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	//r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);	
	//printf("r1:%d\n", r1);
	//printf("r2:%d\n", r2);

	//int	r1;
	//int r2;
	//char s1[4] = "";
	//char s2[4] = "";
	//r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0));
	//r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	//printf("r1:%s, %d\n", s1, r1);
	//printf("r2:%s, %d\n", s2, r2);


	//printf("%s\n", ft_substr("1234567", 19, 19));

	//char	**a=ft_split("qw rt yu", ' ');
	//int	i=-1;
	//while (a[++i])
	//	printf("%s\n", a[i]);


	//printf("%s\n", ft_itoa(-0));
	
	//printf("%s\n", ft_strmapi("prikol", ft_prikol));


	//t_list	*l = ft_lstnew(strdup(" 1 2 3 "));
	//t_list	*ret;
	//l->next = ft_lstnew(strdup("ss"));
	//l->next->next = ft_lstnew(strdup("-_-"));
	//ret = ft_lstmap(l, lstmap_f, NULL);
	////printf("%s\n", ret->content);
	//printf("%s\n", l->next->next->content);
	

	t_list	*l = ft_lstnew(strdup("nyancat"));
	l->next = ft_lstnew(strdup("#TEST#"));
	ft_lstclear(&(l->next), lstdelone_f);	
	printf("%p\n", l->next);
	printf("%s\n", (char *) l->next->content);
}
