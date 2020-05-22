#include "../includes/libft.h"

/*
** searches through the list to find a content that maches the content
** given as a parameter. Returns a pointer to that element of the list.
*/

t_list	*ft_lstsrc(const void *content, t_list *beginning)
{
	t_list	*returnable;
	
	returnable = beginning;
	while (returnable != NULL && !ft_strequ(returnable->content, content))
		returnable = returnable->next;
	return (returnable);
}
