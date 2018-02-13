#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
