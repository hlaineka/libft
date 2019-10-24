#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	w = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[w] != '\0' && i < (size - 1))
	{
		dest[i] = src[w];
		i++;
		w++;
	}
	if (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}
