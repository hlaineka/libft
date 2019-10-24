#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t num)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	w = 0;
	while (dest[i] != '\0')
		i++;
	while (src[w] != '\0' && w < num)
	{
		dest[i] = src[w];
		w++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
