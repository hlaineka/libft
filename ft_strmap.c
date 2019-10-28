/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:42:08 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/28 17:22:31 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char(*f)(char))
{
	int		i;
	char	*returnable;

	i = 0;
	returnable = ft_strnew(ft_strlen(s));
	if (s && returnable && f)

	{
		while (s[i] != '\0')
		{
			returnable[i] = f(s[i]);
			i++;
		}
	}
	return (returnable);
}
