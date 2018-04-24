/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcortes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:01:23 by dcortes           #+#    #+#             */
/*   Updated: 2016/11/28 22:41:20 by dcortes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//# define INT_MAX (1<<31)-1
# include <libc.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_islower(int c);
int 	ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcat(char *append, const char *appendee);
char	*ft_strncat(char *append, const char *appendee, size_t n);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int 	ft_strisnum(char *s);
int		ft_isascii(int c);
int		ft_atoi(const char *str);
char	*ft_strstr(const char *big, const char *little);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char* src, size_t dstsize);
//char	*ft_strnstr(const char *big, const char *little, size_t len);


#endif
