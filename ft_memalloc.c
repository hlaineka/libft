#include "libft.h"

//allocates size amount of bytes of memory as zero
void	*ft_memalloc(size_t size)
{
	char	*returnable;
	size_t		i;

	returnable = (char*)malloc(sizeof(char) * size);
	if (returnable == NULL)
		return (NULL);
	i = 0;
	ft_bzero(returnable, size);
	return ((void*)returnable);
}
