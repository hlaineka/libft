#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if(src[i] == c)
			return ((char*)&src[i]);
		i--;
	}
	return (NULL);
}
