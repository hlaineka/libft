#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	if (str1[0] == '\0' || str2[0] == '\0' || str1[0] != str2[0])
		return ((unsigned char)str1[0] - (unsigned char)str2[0]);
	else
		return (ft_strcmp(&str1[1], &str2[1]));
}
