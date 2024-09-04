#include "so_long.h"

int	format_check(char *str)
{
	int			i;
	int			j;
	const char	*format;

	i = 0;
	j = 3;
	format = ".ber";
	while (str[i])
		i++;
	if (i < 4)
    	return (0);
	while (j >= 0)
	{
		i--;
		if (str[i] != format[j])
			return (0);
		j--;
	}
	return (1);
}