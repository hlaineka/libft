#include "libft.h"

int     define_length(int n)
{
    int i;

    i = 1;
    if (n == t_int_min)
    {
        i = i + 2;
        n = 147483648;
    }
    if (n < 0)
    {
        i++;
        n = n * (-1);
    }
    while ((n / 10) > 0)
    {
        i++;
        n = n / 10;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    static char     *str;
    int             i;
    int             w;
    int             length;

    length = define_length(n);
    str = (char*)malloc(sizeof(char) * length + 1);
    i = 0;
    if (n == t_int_min)
    {
        str[i] = ('-');
        i++;
        str[i] = ('2');
        n = 147483648;
    }
    if (n < 0)
    {
        str[i]=('-');
        i++;
        n = n * (-1);
    }
    w = length - 1;
    while (n >= 10)
    {
        str[w] = ((n % 10) + '0');
        n = n / 10;
        w--;
    }   
    str[w] = n + '0';
    str[length] = ('\0');
    return (str);
} 
