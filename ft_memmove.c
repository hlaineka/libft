/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:32:47 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/22 13:18:22 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*temp_dest;
	unsigned const char	*temp_src;
	unsigned int		i;

	temp_dest = dest;
	temp_src = src;
	i = 0;
	if (temp_dest < temp_src)
	{
		while (i < num)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	} else
	{
		while (num > 0)
		{
			temp_dest[num - 1] = temp_src[num - 1];
			num--;
		}
	}
	return (dest);
}
