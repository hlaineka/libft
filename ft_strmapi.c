/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:13:51 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/29 11:18:26 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*returnable;

	i = 0;
	returnable = ft_strnew(ft_strlen(s));
	if (s && returnable && f)
	{
		while (s[i] != '\0')
		{
			returnable[i] = f(i, s[i]);
			i++;
		}
		returnable[i] = '\0';
	}
	return (returnable);
}
