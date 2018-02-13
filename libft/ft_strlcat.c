#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t src_len;
	size_t dest_len;

	if (dest != NULL && src != NULL)
	{
		i = 0;
		src_len = ft_strlen(src);
		dest_len = ft_strlen(dest);
		if (n > dest_len)
		{
			while (src[i] != '\0' && ((dest_len + i) < (n - 1)))
			{
				dest[dest_len + i] = src[i];
				i++;
			}
			if ((dest_len + i) < (n - 1))
			{
				dest[dest_len + i] = src[i];
			}
		}
		return (src_len + dest_len);
	}
	return (n);
}
