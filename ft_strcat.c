/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:32:22 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/23 14:25:19 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int w;
	
	i = 0;
	w = 0;
	while (dest[i] != '\0')
		i++;
	while (src[w] != '\0')
	{
		dest[i] = src[w];
		i++;
		w++;
	}
	dest[i] = '\0';
	return (dest);
}
