/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:31:36 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/23 11:40:44 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp (const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*temp_ptr1;
	const unsigned char *temp_ptr2;
	
	temp_ptr1 = ptr1;
	temp_ptr2 = ptr2;
	if (num <= 1)
		return (temp_ptr2[0] - temp_ptr1[0]);
	else if (temp_ptr2[0] == temp_ptr2[0])
		return (ft_memcmp(&ptr1[1], &ptr2[1], num - 1));
	else 
		return (temp_ptr2[0] - temp_ptr1[0]);
}
