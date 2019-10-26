#include "libft.h"

//checks if c is ascii (returns 1) or not (returns 0)
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
