#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	w;
	unsigned int	returnable;

	i = 0;
	w = 0;
	returnable = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[w] != '\0' && i < (size))
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
	return (returnable);
}
