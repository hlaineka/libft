/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:25:55 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/21 16:07:38 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*temp_dest;
	const char		*temp_src;
	unsigned int	i;
	char			temp_c;

	temp_c = c + '0';
	temp_dest = dest;
	temp_src = src;
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_src[i] == temp_c)
			return(&dest[i + 1]);
		i++;
	}
	return (NULL);
}
