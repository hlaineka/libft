#include "../includes/libft.h"

/*
** Adds given content to the end of the list.
*/

void	ft_lstaddafter(t_list *end, t_list *newelem)
{
	end->next = newelem;
	return;
}