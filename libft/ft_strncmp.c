#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (size - i > 0)
		{
			if (s1[i] != s2[i] || s1[i] == '\0')
			{
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			}
			i++;
		}
	}
	if (s1 == NULL && s2 != NULL)
	{
		return (1);
	}
	if (s1 != NULL && s2 == NULL)
	{
		return (-1);
	}
	return (0);
}
