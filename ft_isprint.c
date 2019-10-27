#include "libft.h"

//checks if c is printable ascii character (return 1) or not (returns 0)
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
