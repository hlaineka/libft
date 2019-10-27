#include "libft.h"

//takes as a parameter a string and returns its value as an integer
//removes all whitespace in front of the strings and takes into account
//minus and plus signs
static int	is_whitespace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int	negative_multiplier;
	int returnable;

	i = 0;
	negative_multiplier = 1;
	returnable = 0;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			negative_multiplier = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		returnable = returnable * 10 + (str[i] - '0');
		i++;
	}
	return (returnable * negative_multiplier);
}
