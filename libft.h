/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:04:39 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/24 14:56:05 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **p);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *p, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char *c);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int c);
void	ft_strclr(char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **str);
char	*ft_strdup(const char *str);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *str, void (*f)(char*));
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dst, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strndup(const char *str, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_stroverlap(const char *s1, const char *s2);
char	*ft_strrchr(const char *str, int c);
int		ft_wordcount(char const *str, char delim);
char	**ft_strsplit(char const *str, char delim);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strtrim(char const *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif