#include "../includes/libft.h"

void	ft_lstdellast(t_list **first)
{
	t_list	*temp;
	t_list	*last;

	temp = NULL;
	last = first;
	while (last != NULL && last->next != NULL)
	{
		temp = last;
		last = last->next;
	}

}