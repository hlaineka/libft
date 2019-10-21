/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:58:27 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/21 14:57:45 by hlaineka         ###   ########.fr       */
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

#endif
