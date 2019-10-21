/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:40:43 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/21 15:19:12 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*temp_dest;
	const char	*temp_src;

	temp_dest = dest;
	temp_src = src;
	while (num > 0)
	{
		temp_dest[num - 1] = temp_src[num - 1];
		num--;
	}
	return(dest);
}
