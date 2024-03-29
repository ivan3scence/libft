/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:58:57 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/11 18:59:32 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void	*content);
int		ft_lstsize(t_list	*lst);
void	ft_lstadd_front(t_list	**lst,	t_list	*new);
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list	**lst,	t_list	*new);
void	ft_lstdelone(t_list	*lst,	void	(*del)(void	*));
void	ft_lstclear(t_list	**lst,	void	(*del)(void	*));
t_list	*ft_lstmap(t_list	*lst,	void	*(*f)(void	*), \
	void	(*del)(void	*));
void	*ft_memset(void	*s,	int	c,	size_t	n);
char	*ft_itoa(int	n);
void	ft_striteri(char	*s,	void	(*f)(unsigned int,	char*));
void	ft_putendl_fd(char	*s,	int	fd);
void	ft_putstr_fd(char	*s,	int	fd);
char	*ft_strmapi(char const	*s,	char	(*f)(unsigned int,	char));
char	*ft_substr(char	const	*s,	unsigned	int	start,	size_t	len);
void	*ft_calloc(size_t	count,	size_t	size);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strdup(const char	*src);
char	**ft_split(char	const	*s,	char	c);
char	*ft_strtrim(char const	*s1,	char	const	*set);
int		ft_toupper(int	c);
int		ft_atoi(const	char	*str);
char	*ft_strnstr(const	char	*haystack, \
	const	char	*needle,	size_t	len);
int		ft_memcmp(const	void	*s1,	const	void	*s2,	size_t	n);
void	*ft_memchr(const	void	*s,	int	c,	size_t	n);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);
char	*ft_strchr(const char	*s,	int	c);
char	*ft_strrchr(const char	*s,	int	c);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);
size_t	ft_strlcpy(char	*dst, \
	const char	*src, size_t	dstsize);
int		ft_isalpha(int	c);
void	*ft_memspy(void	*dst, \
	const	void	*src, size_t	n);
void	ft_bzero(void	*s,	size_t	n);
int		ft_isalnum(int	c);
int		ft_isascii(int	c);
int		ft_isdigit(int	c);
size_t	ft_strlen(const char	*s);
int		ft_isprint(int	c);
#endif
