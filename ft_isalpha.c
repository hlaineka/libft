#include "libft.h"

//Takes as a parameter c, and chekcs if c is an ascii alphabet.
//returns one if c is alphabet, and zero if it is not.
int ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
