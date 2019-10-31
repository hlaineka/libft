/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:36:01 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/30 12:00:04 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(const char *s)
{
	int		i;
	int		w;
	int		u;
	char	*returnable;

	i = 0;
	w = ft_strlen(s) - 1;
	u = 0;
	returnable = ft_strnew(ft_strlen(s) + 1);
	if (returnable)
	{
		while (s[i] && is_whitespace(s[i]))
			i++;
		while (w > i && is_whitespace(s[w]))
			w--;
		while (i <= w)
		{
			returnable[u] = s[i];
			i++;
			u++;
		}
		returnable[i] = '\0';
		return (returnable);
	}
	return (NULL);
}
