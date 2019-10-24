#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t num)
{
	unsigned int		i;
	const unsigned char	*temp_ptr;
	unsigned char		temp_c;

	temp_ptr = ptr;
	temp_c = c;
	i = 0;
	while (i < num)
	{
		if (temp_ptr[i] == temp_c)
			return (void*)&ptr[i];
		i++;
	}
	return (NULL);
}
