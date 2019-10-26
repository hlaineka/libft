/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:58:27 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/23 13:46:13 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define T_INT_MAX 2147483647
# define T_INT_MIN -2147483648
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
size_t	ft_strlen(char const *s);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char	*ft_strncpy(char *dest, const char *src, size_t num);
char	*ft_strcat(char *dest, const char *src);
void	*ft_memchr(const void *ptr, int c, size_t num);
char	*ft_strncat(char *dest, const char *src, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *src, int c);
char	*ft_strstr(const char *str1, const char *str2);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int arg);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);

#endif
