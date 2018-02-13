#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t dest_len;

	if (dest != NULL && src != NULL)
	{
		i = 0;
		dest_len = ft_strlen(dest);
		while ((n - i) > 0)
		{
			dest[dest_len + i] = src[i];
			if (src[i] == '\0')
			{
				break;
			}
			i++;
		}
		return (dest);
	}
	return (NULL);
}
