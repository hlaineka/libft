#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*returnable;
	int		length;

	length = ft_strlen(s);
	returnable = (char*)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (s[i] != '\0')
	{
		returnable[i] = s[i];
		i++;
	}
	returnable[i] = '\0';
	return (returnable);
}
