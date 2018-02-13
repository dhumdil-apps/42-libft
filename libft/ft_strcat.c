#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t i;

	i = 0;
	if (src != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
