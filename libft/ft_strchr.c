#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0' && s[i] != (char)c)
		{
			i++;
		}
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
	}
	return (NULL);
}
