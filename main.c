/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:06:49 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/17 14:38:50 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
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

	n = 346610;
	ft_putnbr(n);

	//previous but with fd
	ft_putstr_fd(s, 1);
	ft_putchar_fd(newline, 1);
	ft_putendl_fd(s, 1);
	ft_putnbr_fd(n, 1);
	ft_putchar_fd(newline, 1);
           
        //strlen
        ft_putnbr(strlen(s));
	ft_putchar_fd(newline, 1);
        ft_putnbr(ft_strlen(s));
	ft_putchar_fd(newline, 1);

        //ft_itoa
        char *itoa = ft_itoa(n);
        ft_putstr(itoa);
		ft_putchar(newline);

        //ft_strdup
        char *new_str; 
		new_str = ft_strdup(s);
        ft_putendl(new_str);

	//strcpy
	char	dest[40];
	ft_putchar('q');
	ft_strcpy(dest, itoa);
	ft_putchar('w');
	ft_putstr(dest);









}
