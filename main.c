/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:06:49 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/21 16:17:42 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	
	
	//PRINT TESTS
	//ft_putchar & ft_putstr ft_putendl
	char	newline;
	char	*s;

	newline = '\n';
	s = "qwerty";
	ft_putstr(s);
	ft_putchar(newline);
	ft_putendl(s);

	//ft_putnbr
	int		n;

	n = 34567;
	ft_putnbr(n);

	//previous but with fd
	ft_putstr_fd(s, 1);
	ft_putchar_fd(newline, 1);
	ft_putendl_fd(s, 1);
	ft_putnbr_fd(n, 1);
	ft_putchar_fd(newline, 1);

	
	//ft_itoa
	ft_putendl("ITOA:");
	char *itoa = ft_itoa(n);
	ft_putstr(itoa);
	ft_putchar(newline);


           



	//LIB C TESTS
 	//memset
	ft_putendl("memset");
	ft_memset(itoa, '3', 3);
	ft_putstr(itoa);
	ft_putchar(newline);

	//bzero
	ft_putendl("bzero:");
	ft_bzero(itoa, 3);
	ft_putendl(itoa);

//memset
	ft_putendl("memset");
	ft_memset(itoa, '3', 3);
	ft_putstr(itoa);
	ft_putchar(newline);

	//memcpy
	char	*destination;
	ft_putendl("memcpy:");
	ft_memcpy(destination, itoa, ft_strlen(itoa) + 1);
	ft_putendl(destination);

	//strlen
    ft_putnbr(strlen(s));
	ft_putchar_fd(newline, 1);
    ft_putnbr(ft_strlen(s));
	ft_putchar_fd(newline, 1);

	//ft_strdup
	char *new_str; 
	new_str = ft_strdup(s);
	ft_putendl(new_str);

	//strcpy
	char	dest[40];
	ft_strcpy(dest, itoa);
	ft_putstr(dest);

	//memccpy
	

	







}
