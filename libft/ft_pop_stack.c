#include "libft.h"

char	ft_pop_stack(char *s)
{
	char c;
	size_t i;

	i = 0;
	if (s[0] != '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		c = s[i - 1];
		s[i - 1] = '\0';
		return (c);
	}
	return ('\0');
}
