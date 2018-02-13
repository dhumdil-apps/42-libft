#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *str_dest;
	unsigned char *str_src;

	i = 0;
	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	while (n - i)
	{
		str_dest[i] = str_src[i];
		if (str_src[i] == (unsigned char)c)
		{
			return ((void *)str_dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
