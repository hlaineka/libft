/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_frees1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <hlaineka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:43:29 by hlaineka          #+#    #+#             */
/*   Updated: 2020/09/16 20:21:54 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Creates a new string where it combines the two strings given as parameters
** Frees the string in s2.
*/

char	*ft_strjoin_frees1(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	w;
	char			*returnable;

	if (s1 && s2)
	{
		if (NULL != (returnable = (char*)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2)))))
		{
			i = 0;
			w = 0;
			while (s1[i] != '\0')
			{
				returnable[i] = s1[i];
				i++;
			}
			while (s2[w] != '\0')
				returnable[i++] = s2[w++];
			returnable[i] = '\0';
			free(s1);
			return (returnable);
		}
	}
	return (NULL);
}
