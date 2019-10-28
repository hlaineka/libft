/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:25:15 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/28 11:25:18 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** frees ap and sets its pointer to NULL
*/

void	ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
