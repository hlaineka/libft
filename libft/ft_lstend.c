#include "../includes/libft.h"

/*
** Finds the last element of the list.
*/

t_list	*ft_lstend(t_list *beginning)
{
	t_list	*temp;

	temp = beginning;
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;
	return (temp);
}