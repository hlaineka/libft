#include "libft.h"

//checks if arg is ascii digit (return 1) or not (return 0)
int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}
