#include "libft.h"

//checks if c is either an scii number or an alphabet
int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
