#include "../includes/libft.h"

int	ft_lst_length(t_list *first)
{
	int	i;

	i = 0;
	while (first)
	{
		i++;
		first = first->next;
	}
	return(i);
}