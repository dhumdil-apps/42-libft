#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	if (dest != NULL && src != NULL)
	{
		i = 0;
		j = 0;
		while (n - i > 0)
		{
			if (src[j] != '\0')
			{
				dest[i++] = src[j++];
			}
			else
			{
				dest[i++] = '\0';
			}
		}
	}
	return (dest);
}
