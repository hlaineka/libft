#include "libft.h"

//if c is a lowercase ascii alphabet, returns the value
//of same letter in uppecase. in other cases returns c.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
