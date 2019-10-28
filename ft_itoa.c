/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:35:03 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/22 12:37:40 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** turns intiger value to char*
*/

static int	define_length(int n)
{
	int i;

	i = 1;
	if (n == T_INT_MIN)
	{
		i = i + 2;
		n = 147483648;
	}
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while ((n / 10) > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	static char	*str;
	int			w;

	str = (char*)malloc(sizeof(char) * (define_length(n) + 1));
	w = define_length(n) - 1;
	str[w + 1] = ('\0');
	if (n == T_INT_MIN)
	{
		str[0] = ('-');
		str[1] = ('2');
		n = 147483648;
	}
	if (n < 0)
	{
		str[0] = ('-');
		n = n * (-1);
	}
	while (n >= 10)
	{
		str[w--] = ((n % 10) + '0');
		n = n / 10;
	}
	str[w] = n + '0';
	return (str);
}
