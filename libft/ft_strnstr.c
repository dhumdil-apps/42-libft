#include "libft.h"

char	*ft_strnstr(const char *s, const char *substring, size_t n)
{
	size_t i;
	size_t j;
	size_t m;

	if (s != NULL && substring != NULL)
	{
		i = 0;
		m = ft_strlen(substring);
		while ((n >= m + i) && s[i] != '\0')
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
