#include "libft.h"

char	*ft_strstr(const char *s, const char *substring)
{
	size_t i;
	size_t j;

	if (s != NULL && substring != NULL)
	{
		if (substring[0] == '\0')
		{
			return ((char *)s);
		}
		i = 0;
		while (s[i] != '\0')
		{
			j = 0;
			while (s[i + j] == substring[j] || substring[j] == '\0')
			{
				if (substring[j++] == '\0')
				{
					return ((char *)s + i);
				}
			}
			i++;
		}
	}
	return (NULL);
}
