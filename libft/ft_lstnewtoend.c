#include "../includes/libft.h"

/*
** Adds given content to the end of the list.
*/

void	ft_lstnewtoend(const void *content, size_t content_size, t_list **beginning)
{
	t_list	*newelem;
	t_list	*temp;

	newelem = ft_lstnew(content, content_size);
	temp = ft_lstend(*beginning);
	if (temp == NULL)
		*beginning = newelem;
	else
		ft_lstaddafter(temp, newelem);
	return ;
}