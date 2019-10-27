#include "libft.h"

//If c is uppercase ascii alphabet, returns the ascii value
// of that alphabet in uppercase. Otherwise returns c
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
