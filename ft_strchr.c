#include "libft.h"

char *ft_strchr(const char *src, int c)
{
	int		i;
	char	temp_c;
	
	i = 0;
	temp_c = c;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return (char*)&src[i];
		i++;
	}
	if (src[i] == c)
		return(char*)&src[i];
	return (NULL);
}
