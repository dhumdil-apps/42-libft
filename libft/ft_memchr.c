#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *)s;
	while (n - i)
	{
		if (str[i] == (unsigned char)c)
		{
			return (void *)(str + i);
		}
		i++;
	}
	return (NULL);
}
