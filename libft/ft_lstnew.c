/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:11:40 by hlaineka          #+#    #+#             */
/*   Updated: 2020/05/19 09:13:23 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** creates a new t_list variable with given content and size. If content is
** NULL, is pointer to content set to NULL and size to zero. Pointer to next
** is always set to NULL
*/

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*returnable;
	char	*temp_content;

	if ((returnable = (t_list*)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			returnable->content = NULL;
			returnable->content_size = 0;
		}
		else
		{
			temp_content = ft_strdup(content);
			returnable->content = (void*)temp_content;
			returnable->content_size = content_size;
		}
		returnable->next = NULL;
		return (returnable);
	}
	return (NULL);
}
