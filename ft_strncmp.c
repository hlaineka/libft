#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	if (str1[0] == '\0' || str2[0] == '\0' || str1[0] != str2[0]
			|| num == 1)
		return (str1[0] - str2[0]);
	else
		return (ft_strncmp(&str1[1], &str2[1], num - 1));
}
