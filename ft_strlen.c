#include "libft.h"

int ft_strlen(char const *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
