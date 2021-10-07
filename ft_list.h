/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:09:53 by sdonny            #+#    #+#             */
/*   Updated: 2021/10/07 12:48:53 by sdonny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIST_H
# define FTLIST_H

# include <unistd.h>

void *ft_memset(void *s, int c, size_t n);
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
int     ft_toupper(int c);
int    ft_tolower(int    c);
char    *ft_strchr(const char   *s, int c);
size_t    ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
#endif

