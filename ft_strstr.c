#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	if (str2[0] == '\0')
		return ((char*)str1);
	while (str1[i] != '\0')
	{	
		while(str2[w] != '\0' && str1[i + w] != '\0' && str2[w] == str1[i + w])
		{
			if (str2[w + 1] == '\0')
				return ((char*)&str1[i]);
			w++;
		}
	i++;
	w = 0;
	}
	return (NULL);
}
